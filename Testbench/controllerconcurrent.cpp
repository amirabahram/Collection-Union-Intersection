#include "controllerconcurrent.h"
#include <QElapsedTimer>

ControllerConcurrent::ControllerConcurrent(QObject *parent)
    : QObject{parent}
{

}

////////make seperate functions for Intersection
QList<int> ControllerConcurrent::PrepareAB_CompareAB(const QVector<int> &inputs){
    qDebug()<<"MultiThreadId: "<<QThread::currentThread();
    QList<int> A;
    QList<int> B;
    QList<int> intersection;
    for(int i=inputs[0];i<=inputs[1];i++){
        A.append(i);
    }
    for(int i=inputs[2];i<=inputs[3];i++){
        B.append(i);
    }
    int i=0;
    for(int &itemA:A){
        for(int &itemB:B){
            if(itemA==itemB)
                intersection.append(itemA);
        }
        i++;
        emit writeBarReady((int)( i*50/(A.size()*B.size())));
    }
    return intersection;
}

QList<int> ControllerConcurrent::PrepareC(const QVector<int> &inputs){
    qDebug()<<"MultiThreadId: "<<QThread::currentThread();
    QList<int> C;
    for(int i=inputs[4];i<=inputs[5];i++){
        C.append(i);
    }
    return C;
}

QList<int> ControllerConcurrent::CompareABC(const QList<int> intersec, const QList<int> C)
{
    qDebug()<<"MultiThreadId: "<<QThread::currentThread();
    QList<int> newIntersection;
    if(intersec.size()>0){

        int i=0;
        for (const int &itemIntersection : intersec) {
            if (C.contains(itemIntersection)) {
                newIntersection.append(itemIntersection);
            }
            i++;
            emit writeBarReady((int)((i*70/intersec.size())+50));
        }
        QList<QString> strIntersec;
        for(int &itemIntersection:newIntersection){
            QString str = QString::number(itemIntersection);
            strIntersec.append(str);
            emit writeBarReady((int)((i*100/newIntersection.size())+70));
        }
        emit writeBarReady(100);
    }
    return newIntersection;
}


void ControllerConcurrent::IntersectionConcurrent(QVector<int> &inputs)
{
    QElapsedTimer timer;
    timer.start();
    QFuture<QList<int>> future1= QtConcurrent::run([this,inputs](){
        return PrepareAB_CompareAB(inputs);
    });
    QFuture<QList<int>> future2= QtConcurrent::run([this,inputs](){
        return PrepareC(inputs);
    });
    QList<int> fuRes1 = future1.result();
    QList<int> fuRes2 = future2.result();
    QFuture<QList<int>> future3= QtConcurrent::run([this,fuRes1,fuRes2](){
        return CompareABC(fuRes1,fuRes2);
    });
    QList<int> res = future3.result();
    QList<QString> strIntersec;
    for(int &itemIntersection:res){
        QString str = QString::number(itemIntersection);
        strIntersec.append(str);

    }
    qint64 elapsed = timer.elapsed();
    QString str = QString::number(elapsed);
    strIntersec.append(str);
    emit writeBarReady(100);
    emit writeUiReady(strIntersec,"Intersection:");
    // QFuture<QList<int>> future1 = QtConcurrent::run(&Controller::PrepareAB_CompareAB,inputs);
    // QFuture<int> future2 = QtConcurrent::run(this,&Controller::A,a);
    // QFuture<QList<int>> future2 = QtConcurrent::run(&Controller::PrepareC,inputs);
}

QList<int> ControllerConcurrent::PrepareA(const QVector<int> &inputs){
    QList<int> list;
    for(int i=inputs[0];i<=inputs[1];i++){
        list.append(i);
    }
    return list;
}
QList<int> ControllerConcurrent::PrepareB(const QVector<int> &inputs){
    QList<int> list;
    for(int i=inputs[2];i<=inputs[3];i++){
        list.append(i);
    }
    return list;
}
QList<int> ControllerConcurrent::PrepareCu(const QVector<int> &inputs){
    QList<int> list;
    for(int i=inputs[4];i<=inputs[5];i++){
        list.append(i);
    }
    return list;
}
void ControllerConcurrent::UnionsConcurrent(QVector<int> &inputs)
{
    QElapsedTimer timer;
    timer.start();
    QFuture<QList<int>> future1 = QtConcurrent::run([this,inputs](){
        return PrepareA(inputs);
    });
    QFuture<QList<int>> future2 = QtConcurrent::run([this,inputs](){
        return PrepareB(inputs);
    });
    QFuture<QList<int>> future3 = QtConcurrent::run([this,inputs](){
        return PrepareCu(inputs);
    });
    QList<int> finalList;
    finalList<<future1.result();
    finalList<<future2.result();
    finalList<<future3.result();
    std::sort(finalList.begin(),finalList.end());
    finalList.append(timer.elapsed());
    emit writeUiReadyUnion(finalList,"Unions:");

}





