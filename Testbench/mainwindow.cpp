#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "controller.h"
#include "controllerconcurrent.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Controller* ptr = new Controller();
    ControllerConcurrent* ptrConcurrent = new ControllerConcurrent();
    qRegisterMetaType<QList<int>>("QList<int>&");
    qRegisterMetaType<QList<QString>>("QList<QString>&");
    connect(ui->intersection,&QPushButton::clicked,this,&MainWindow::onInterSectionClicked);//could be 1 for Unions and Intersection???
    connect(ui->unions,&QPushButton::clicked,this,&MainWindow::onUnionsClicked);
    connect(this,&MainWindow::AIntersectionSig,ptr,&Controller::Intersection);
    connect(this,&MainWindow::AIntersectionSig,ptrConcurrent,&ControllerConcurrent::IntersectionConcurrent);
    connect(this,&MainWindow::AUnionsSig,ptrConcurrent,&ControllerConcurrent::UnionsConcurrent);
    connect(this,&MainWindow::AUnionsSig,ptr,&Controller::Unions,Qt::QueuedConnection);
    connect(this,&MainWindow::BIntersectionSig,ptr,&Controller::IntersectionLimited,Qt::QueuedConnection);
    connect(this,&MainWindow::BUnionsSig,ptr,&Controller::UnionsLimited,Qt::QueuedConnection);
    connect(ptr,&Controller::writeUiReady,this,&MainWindow::writeUi);
    connect(ptrConcurrent,&ControllerConcurrent::writeUiReady,this,&MainWindow::writeUiConcurrent);
    connect(ptrConcurrent,&ControllerConcurrent::writeUiReadyUnion,this,&MainWindow::writeUiConcurrentUnions);
    connect(ui->AGroupBox,&QGroupBox::toggled,this,&MainWindow::onAGroupBoxToggled);
    connect(ui->BGroupBox,&QGroupBox::toggled,this,&MainWindow::onBGroupBoxToggled);
    connect(ptr,&Controller::writeBarReady,this,&MainWindow::writeProgressBar);
    connect(ptrConcurrent,&ControllerConcurrent::writeBarReady,this,&MainWindow::writeProgressBarConcurent);
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("Collections");
    db.setPort(5432);
    db.setUserName("postgres");
    db.setPassword("qwe");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onInterSectionClicked()
{
    QElapsedTimer timer;
    timer.start();
    QVector<int> inputs(18);
    inputs[0]=ui->Amin->text().toInt();
    inputs[1]=ui->Amax->text().toInt();
    inputs[2]=ui->Bmin->text().toInt();
    inputs[3]=ui->Bmax->text().toInt();
    inputs[4]=ui->Cmin->text().toInt();
    inputs[5]=ui->Cmax->text().toInt();
    inputs[6]=ui->E1->text().toInt();
    inputs[7]=ui->E2->text().toInt();
    inputs[8]=ui->E3->text().toInt();
    inputs[9]=ui->E4->text().toInt();
    inputs[10]=ui->F1->text().toInt();
    inputs[11]=ui->F2->text().toInt();
    inputs[12]=ui->F3->text().toInt();
    inputs[13]=ui->F4->text().toInt();
    inputs[14]=ui->G1->text().toInt();
    inputs[15]=ui->G2->text().toInt();
    inputs[16]=ui->G3->text().toInt();
    inputs[17]=ui->G4->text().toInt();
    if((inputs[0]>inputs[1]) || (inputs[2]>inputs[3]) || (inputs[4]>inputs[5])){

        ui->output->clear();
        ui->output->addItem("Enter Numbers in AGroupBox as correct order!");
    }else{
        if(ui->AGroupBox->isChecked()&&ui->BGroupBox->isChecked()){
            ui->output->clear();
            ui->output->addItem("you should choose one of them!");
        }
        else{
            if(ui->AGroupBox->isChecked())
                emit AIntersectionSig(inputs);
            if(ui->BGroupBox->isChecked())
                emit BIntersectionSig(inputs);
        }
    }



}

void MainWindow::onUnionsClicked()
{
    QVector<int> inputs(18);
    inputs[0]=ui->Amin->text().toInt();
    inputs[1]=ui->Amax->text().toInt();
    inputs[2]=ui->Bmin->text().toInt();
    inputs[3]=ui->Bmax->text().toInt();
    inputs[4]=ui->Cmin->text().toInt();
    inputs[5]=ui->Cmax->text().toInt();
    inputs[6]=ui->E1->text().toInt();
    inputs[7]=ui->E2->text().toInt();
    inputs[8]=ui->E3->text().toInt();
    inputs[9]=ui->E4->text().toInt();
    inputs[10]=ui->F1->text().toInt();
    inputs[11]=ui->F2->text().toInt();
    inputs[12]=ui->F3->text().toInt();
    inputs[13]=ui->F4->text().toInt();
    inputs[14]=ui->G1->text().toInt();
    inputs[15]=ui->G2->text().toInt();
    inputs[16]=ui->G3->text().toInt();
    inputs[17]=ui->G4->text().toInt();
    if(ui->AGroupBox->isChecked()&&ui->BGroupBox->isChecked()){
        ui->output->clear();
        ui->output->addItem("you should choose one of them!");
    }
    else{
        if(ui->AGroupBox->isChecked())
            emit AUnionsSig(inputs);
        if(ui->BGroupBox->isChecked())
            emit BUnionsSig(inputs);
    }
}

void MainWindow::writeUi(QList<QString> &stri, QString t)
{
    ui->output->clear();
    if(!db.open()){
        qDebug()<<"Error: "<<db.lastError();
    }
    QSqlDatabase::database().transaction();
    QSqlQuery query(db);
    for(QString& str:stri){
        query.clear();
        ui->output->addItem(str);
        query.prepare("INSERT INTO public.\"DataFromQt\" VALUES (:title,:value)");
         query.bindValue(":title","SingleThread");
         query.bindValue(":value",str);
        if(!query.exec()){
            qDebug()<<"Error: "<<query.lastError();
        }
        else{
            qDebug()<<"Data Inserted Successfully";
        }
    }
    QSqlDatabase::database().commit();
    db.close();
    ui->ElapseTimeShow->clear();
    ui->ElapseTimeShow->addItem(stri.last());
    ui->Title->setText(t);


}

void MainWindow::writeUiConcurrent(QList<QString> &stri, QString t)
{
    ui->output2->clear();
    if(!db.open()){
        qDebug()<<"Error: "<<db.lastError();
    }
    QSqlDatabase::database().transaction();
    QSqlQuery query(db);
    for(QString& str:stri){
        ui->output2->addItem(str);
        query.clear();
        query.prepare("INSERT INTO public.\"DataFromQt\" VALUES (:title,:value)");
        query.bindValue(":title","MultiThreadIntersection");
        query.bindValue(":value",str);
        if(!query.exec()){
            qDebug()<<"Error: "<<query.lastError();
        }
        else{
            qDebug()<<"Data Inserted Successfully";
        }
    }
    QSqlDatabase::database().commit();
    db.close();
    ui->ElapseTimeShow2->clear();
    ui->ElapseTimeShow2->addItem(stri.last());
    ui->Title2->setText(t);
}

void MainWindow::writeUiConcurrentUnions(QList<int> &num, QString t)
{
    QString str;
    ui->output2->clear();
    if(!db.open()){
        qDebug()<<"Error: "<<db.lastError();
    }
    QSqlDatabase::database().transaction();
    QSqlQuery query(db);
    for(int &number:num){
        str = QString::number(number);
        ui->output2->addItem(str);
        query.clear();
        query.prepare("INSERT INTO public.\"DataFromQt\" VALUES (:title,:value)");
        query.bindValue(":title","MutiThreadUnion");
        query.bindValue(":value",str);
        if(!query.exec()){
            qDebug()<<"Error: "<<query.lastError();
        }
        else{
            qDebug()<<"Data Inserted Successfully";
        }
    }
    QSqlDatabase::database().commit();
    db.close();
    ui->ElapseTimeShow2->clear();
    ui->ElapseTimeShow2->addItem(str);
    ui->Title2->setText(t);
}

void MainWindow::onAGroupBoxToggled(bool checked)
{
    if(checked){
        if(ui->BGroupBox->isChecked()){
            ui->AGroupBox->setChecked(false);
        }
    }
}

void MainWindow::onBGroupBoxToggled(bool checked)
{
    if(checked){
        if(ui->AGroupBox->isChecked()){
            ui->BGroupBox->setChecked(false);
        }
    }
}

void MainWindow::writeProgressBar(int value)
{
    ui->progressBar->setValue(value);
}

void MainWindow::writeProgressBarConcurent(int value)
{
    ui->progressBar2->setValue(value);
}

