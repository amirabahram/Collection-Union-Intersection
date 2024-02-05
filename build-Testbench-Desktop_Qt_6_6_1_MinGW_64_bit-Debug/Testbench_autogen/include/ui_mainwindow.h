/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *Title;
    QListWidget *output;
    QGroupBox *AGroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *Amin;
    QLabel *label_8;
    QLineEdit *Amax;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *Bmin;
    QLabel *label_9;
    QLineEdit *Bmax;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *Cmin;
    QLabel *label_10;
    QLineEdit *Cmax;
    QGroupBox *BGroupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *G3;
    QLineEdit *G1;
    QLineEdit *G2;
    QLineEdit *G4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *F1;
    QLineEdit *F2;
    QLineEdit *F3;
    QLineEdit *F4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *E1;
    QLineEdit *E2;
    QLineEdit *E3;
    QLineEdit *E4;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *intersection;
    QPushButton *unions;
    QLabel *label_11;
    QListWidget *ElapseTimeShow;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(730, 685);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(430, 10, 51, 24));
        Title = new QLabel(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(430, 30, 101, 24));
        output = new QListWidget(centralwidget);
        output->setObjectName("output");
        output->setGeometry(QRect(430, 60, 256, 361));
        AGroupBox = new QGroupBox(centralwidget);
        AGroupBox->setObjectName("AGroupBox");
        AGroupBox->setGeometry(QRect(40, 10, 351, 261));
        AGroupBox->setCheckable(true);
        verticalLayoutWidget = new QWidget(AGroupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 30, 231, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        Amin = new QLineEdit(verticalLayoutWidget);
        Amin->setObjectName("Amin");

        horizontalLayout_2->addWidget(Amin);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        Amax = new QLineEdit(verticalLayoutWidget);
        Amax->setObjectName("Amax");

        horizontalLayout_2->addWidget(Amax);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        Bmin = new QLineEdit(verticalLayoutWidget);
        Bmin->setObjectName("Bmin");

        horizontalLayout_3->addWidget(Bmin);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);

        Bmax = new QLineEdit(verticalLayoutWidget);
        Bmax->setObjectName("Bmax");

        horizontalLayout_3->addWidget(Bmax);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        Cmin = new QLineEdit(verticalLayoutWidget);
        Cmin->setObjectName("Cmin");

        horizontalLayout_4->addWidget(Cmin);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_4->addWidget(label_10);

        Cmax = new QLineEdit(verticalLayoutWidget);
        Cmax->setObjectName("Cmax");

        horizontalLayout_4->addWidget(Cmax);


        verticalLayout->addLayout(horizontalLayout_4);

        BGroupBox = new QGroupBox(centralwidget);
        BGroupBox->setObjectName("BGroupBox");
        BGroupBox->setGeometry(QRect(40, 280, 351, 261));
        BGroupBox->setCheckable(true);
        BGroupBox->setChecked(false);
        verticalLayoutWidget_2 = new QWidget(BGroupBox);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(69, 40, 252, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        G3 = new QLineEdit(verticalLayoutWidget_2);
        G3->setObjectName("G3");

        horizontalLayout_6->addWidget(G3);

        G1 = new QLineEdit(verticalLayoutWidget_2);
        G1->setObjectName("G1");

        horizontalLayout_6->addWidget(G1);

        G2 = new QLineEdit(verticalLayoutWidget_2);
        G2->setObjectName("G2");

        horizontalLayout_6->addWidget(G2);

        G4 = new QLineEdit(verticalLayoutWidget_2);
        G4->setObjectName("G4");

        horizontalLayout_6->addWidget(G4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        F1 = new QLineEdit(verticalLayoutWidget_2);
        F1->setObjectName("F1");

        horizontalLayout_5->addWidget(F1);

        F2 = new QLineEdit(verticalLayoutWidget_2);
        F2->setObjectName("F2");

        horizontalLayout_5->addWidget(F2);

        F3 = new QLineEdit(verticalLayoutWidget_2);
        F3->setObjectName("F3");

        horizontalLayout_5->addWidget(F3);

        F4 = new QLineEdit(verticalLayoutWidget_2);
        F4->setObjectName("F4");

        horizontalLayout_5->addWidget(F4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        E1 = new QLineEdit(verticalLayoutWidget_2);
        E1->setObjectName("E1");

        horizontalLayout->addWidget(E1);

        E2 = new QLineEdit(verticalLayoutWidget_2);
        E2->setObjectName("E2");

        horizontalLayout->addWidget(E2);

        E3 = new QLineEdit(verticalLayoutWidget_2);
        E3->setObjectName("E3");

        horizontalLayout->addWidget(E3);

        E4 = new QLineEdit(verticalLayoutWidget_2);
        E4->setObjectName("E4");

        horizontalLayout->addWidget(E4);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayoutWidget_7 = new QWidget(centralwidget);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(40, 540, 351, 80));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        intersection = new QPushButton(horizontalLayoutWidget_7);
        intersection->setObjectName("intersection");

        horizontalLayout_7->addWidget(intersection);

        unions = new QPushButton(horizontalLayoutWidget_7);
        unions->setObjectName("unions");

        horizontalLayout_7->addWidget(unions);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(430, 430, 111, 24));
        ElapseTimeShow = new QListWidget(centralwidget);
        ElapseTimeShow->setObjectName("ElapseTimeShow");
        ElapseTimeShow->setGeometry(QRect(540, 430, 141, 31));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(440, 470, 241, 26));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 730, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "Intersection:", nullptr));
        AGroupBox->setTitle(QCoreApplication::translate("MainWindow", "AGroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        Amin->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        Amax->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        Bmin->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        Bmax->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        Cmin->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        Cmax->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        BGroupBox->setTitle(QCoreApplication::translate("MainWindow", "BGroupBox", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        intersection->setText(QCoreApplication::translate("MainWindow", "intersection", nullptr));
        unions->setText(QCoreApplication::translate("MainWindow", "union", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ElapsedTime:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
