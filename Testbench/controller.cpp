#include "controller.h"
#include <qdebug.h>
#include <QElapsedTimer>
Controller::Controller(QObject *parent)
    : QObject{parent}
{
    _thread.setObjectName("worker thread!");
    this->moveToThread(&_thread);
    _thread.start();
}




////////////////////////////////////
void Controller::Intersection(QVector<int> &inputs)
{
    QElapsedTimer timer;
    timer.start();
    qDebug()<<"SingleThreadId: "<<QThread::currentThread();
    emit writeBarReady(0);
    QList<int> A;
    QList<int> B;
    QList<int> C;
    QList<int> intersection;
    for(int i=inputs[0];i<=inputs[1];i++){
        A.append(i);
    }
    for(int i=inputs[2];i<=inputs[3];i++){
        B.append(i);
    }
    for(int i=inputs[4];i<=inputs[5];i++){
        C.append(i);
    }
    if(A.last()<B.first() && B.last()<C.first()){
        QList<QString> str = {"not have Intersections!"};
        emit writeUiReady(str,"Intersection:");
        emit writeBarReady(100);
    }else{
        int i=0;
        for(int &itemA:A){
            for(int &itemB:B){
                if(itemA==itemB)
                    intersection.append(itemA);
            }
            i++;
            emit writeBarReady((int)( i*50/(A.size()*B.size())));
        }
        i=0;
        if(intersection.size()>0){
            QList<int> newIntersection;
            for (const int &itemIntersection : intersection) {
                if (C.contains(itemIntersection)) {
                    newIntersection.append(itemIntersection);
                }
                i++;
                emit writeBarReady((int)((i*70/intersection.size())+50));
            }
            QList<QString> strIntersec;
            for(int &itemIntersection:newIntersection){
                QString str = QString::number(itemIntersection);
                strIntersec.append(str);
                emit writeBarReady((int)((i*100/newIntersection.size())+70));
            }
            emit writeBarReady(100);
            qint64 elapsedTime = timer.elapsed();
            QString str = QString::number(elapsedTime);
            strIntersec.append(str);
            emit writeUiReady(strIntersec,"Intersection:");
        }


    }
}

void Controller::Unions(QVector<int> &inputs)
{
    QElapsedTimer timer;
    timer.start();
    QList<QString> unions;
    QString str;
    for(int i=inputs[0];i<=inputs[1];i++){
        str = QString::number(i);
        unions.append(str);
    }
    for(int i=inputs[2];i<=inputs[3];i++){
        str = QString::number(i);
        unions.append(str);
    }
    for(int i=inputs[4];i<=inputs[5];i++){
        str = QString::number(i);
        unions.append(str);
    }
    unions.removeDuplicates();
    qint64 elapsedTime = timer.elapsed();
    str = QString::number(elapsedTime);
    unions.append(str);
    emit writeUiReady(unions,"Unions:");


}

void Controller::IntersectionLimited(QVector<int> &inputs)
{
    QVector<int> sortedE(4);
    QVector<int> sortedF(4);
    QVector<int> sortedG(4);
    sortedE[0]= inputs[6];
    sortedE[1]= inputs[7];
    sortedE[2]= inputs[8];
    sortedE[3]= inputs[9];
    sortedF[0]= inputs[10];
    sortedF[1]= inputs[11];
    sortedF[2]= inputs[12];
    sortedF[3]= inputs[13];
    sortedG[0]= inputs[14];
    sortedG[1]= inputs[15];
    sortedG[2]= inputs[16];
    sortedG[3]= inputs[17];
    std::sort(sortedE.begin(),sortedE.end());
    std::sort(sortedF.begin(),sortedF.end());
    std::sort(sortedG.begin(),sortedG.end());
    QList<int> intersection;

    QList<int> newIntersection=intersection;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(sortedE[i]==sortedF[j])
                intersection.append(sortedE[i]);
        }

        for(int &item:intersection){
            for(int &value:sortedG){
                if(item==value)
                    newIntersection.append(item);
            }
        }

    }
    QList<QString> strIntersec;
    for(int &itemIntersection:newIntersection){
        QString str = QString::number(itemIntersection);
        strIntersec.append(str);
    }
    strIntersec.removeDuplicates();
    emit writeUiReady(strIntersec,"Intersection:");
}



void Controller::UnionsLimited(QVector<int> &inputs)
{
    QVector<int> sortedE(4);
    QVector<int> sortedF(4);
    QVector<int> sortedG(4);
    sortedE[0]= inputs[6];
    sortedE[1]= inputs[7];
    sortedE[2]= inputs[8];
    sortedE[3]= inputs[9];
    sortedF[0]= inputs[10];
    sortedF[1]= inputs[11];
    sortedF[2]= inputs[12];
    sortedF[3]= inputs[13];
    sortedG[0]= inputs[14];
    sortedG[1]= inputs[15];
    sortedG[2]= inputs[16];
    sortedG[3]= inputs[17];
    std::sort(sortedE.begin(),sortedE.end());
    std::sort(sortedF.begin(),sortedF.end());
    std::sort(sortedG.begin(),sortedG.end());
    QList<QString> unions;
    QString str;
    QVector<int> sortedAll(12);
    for(int i=0;i<=3;i++){
        sortedAll[i] = sortedE[i];
    }

    for(int i=0;i<=3;i++){
      sortedAll[i+4] = sortedF[i];
    }
    for(int i=0;i<=3;i++){
        sortedAll[i+8] = sortedG[i];
    }
    std::sort(sortedAll.begin(),sortedAll.end());
    for(int i=0;i<12;i++){
        str = QString::number(sortedAll[i]);
        unions.append(str);
    }
    unions.removeDuplicates();
    emit writeUiReady(unions,"Unions:");

}
