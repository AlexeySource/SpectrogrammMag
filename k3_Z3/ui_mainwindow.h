/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *widget;
    QPushButton *pushButton;
    QCustomPlot *widget_2;
    QCustomPlot *customPlot;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_4;
    QDoubleSpinBox *Ampl;
    QLabel *a_mean_3;
    QDoubleSpinBox *alpha1;
    QLabel *a_mean;
    QLabel *label_2;
    QLabel *a_mean_2;
    QDoubleSpinBox *W1;
    QDoubleSpinBox *B;
    QWidget *tab_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_11;
    QDoubleSpinBox *doubleSpinBox_14;
    QDoubleSpinBox *doubleSpinBox_17;
    QDoubleSpinBox *doubleSpinBox_20;
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QDoubleSpinBox *doubleSpinBox_8;
    QDoubleSpinBox *doubleSpinBox_9;
    QDoubleSpinBox *doubleSpinBox_10;
    QDoubleSpinBox *doubleSpinBox_16;
    QDoubleSpinBox *doubleSpinBox_12;
    QDoubleSpinBox *doubleSpinBox_19;
    QDoubleSpinBox *doubleSpinBox_18;
    QDoubleSpinBox *doubleSpinBox_15;
    QDoubleSpinBox *doubleSpinBox_13;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *pushButton_4;
    QCheckBox *checkBox_Sin;
    QCustomPlot *widget_3;
    QGroupBox *groupBox;
    QDoubleSpinBox *doubleSpinBox_porog;
    QPushButton *pushButton_5;
    QTextEdit *textEdit;
    QLabel *label_29;
    QPushButton *pushButton_6;
    QWidget *tab_3;
    QPushButton *pushButton_OpenFile;
    QCheckBox *checkBox_DataFromFile;
    QDoubleSpinBox *doubleSpinBox_N1;
    QLabel *label_28;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_Polyg_Interp;
    QDoubleSpinBox *shiftbox;
    QPushButton *pushButton_IncrWnds;
    QLabel *label_7;
    QCheckBox *checkBox_UseInterp;
    QComboBox *comboBox_WndNumber;
    QComboBox *comboBox_SignalLength;
    QSpinBox *spinBox_Step;
    QLabel *label_30;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1396, 768);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 1221, 251));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1250, 210, 101, 23));
        widget_2 = new QCustomPlot(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 300, 381, 311));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(420, 300, 811, 371));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1250, 240, 101, 23));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 620, 381, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1240, 40, 71, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1240, 70, 41, 20));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(1350, 670, 31, 31));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(1250, 120, 82, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(1250, 140, 82, 17));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(false);
        tabWidget->setGeometry(QRect(1340, 570, 41, 51));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 231, 21));
        QFont font;
        font.setPointSize(9);
        label_4->setFont(font);
        Ampl = new QDoubleSpinBox(tab);
        Ampl->setObjectName(QStringLiteral("Ampl"));
        Ampl->setGeometry(QRect(130, 100, 62, 22));
        Ampl->setSingleStep(1);
        Ampl->setValue(5);
        a_mean_3 = new QLabel(tab);
        a_mean_3->setObjectName(QStringLiteral("a_mean_3"));
        a_mean_3->setGeometry(QRect(70, 100, 51, 20));
        alpha1 = new QDoubleSpinBox(tab);
        alpha1->setObjectName(QStringLiteral("alpha1"));
        alpha1->setGeometry(QRect(130, 60, 62, 22));
        alpha1->setSingleStep(0.05);
        alpha1->setValue(0.5);
        a_mean = new QLabel(tab);
        a_mean->setObjectName(QStringLiteral("a_mean"));
        a_mean->setGeometry(QRect(70, 60, 51, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 40, 31, 21));
        a_mean_2 = new QLabel(tab);
        a_mean_2->setObjectName(QStringLiteral("a_mean_2"));
        a_mean_2->setGeometry(QRect(10, 80, 111, 20));
        W1 = new QDoubleSpinBox(tab);
        W1->setObjectName(QStringLiteral("W1"));
        W1->setGeometry(QRect(130, 40, 62, 21));
        W1->setSingleStep(0.05);
        W1->setValue(0.1);
        B = new QDoubleSpinBox(tab);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(130, 80, 62, 22));
        B->setMaximum(300);
        B->setSingleStep(10);
        B->setValue(60);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        doubleSpinBox = new QDoubleSpinBox(tab_2);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(30, 40, 51, 22));
        doubleSpinBox->setSingleStep(1);
        doubleSpinBox->setValue(4);
        doubleSpinBox_11 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_11->setObjectName(QStringLiteral("doubleSpinBox_11"));
        doubleSpinBox_11->setGeometry(QRect(120, 40, 51, 22));
        doubleSpinBox_11->setSingleStep(0.01);
        doubleSpinBox_11->setValue(0.1);
        doubleSpinBox_14 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_14->setObjectName(QStringLiteral("doubleSpinBox_14"));
        doubleSpinBox_14->setGeometry(QRect(120, 100, 51, 22));
        doubleSpinBox_14->setSingleStep(0.01);
        doubleSpinBox_14->setValue(0.2);
        doubleSpinBox_17 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_17->setObjectName(QStringLiteral("doubleSpinBox_17"));
        doubleSpinBox_17->setGeometry(QRect(120, 160, 51, 22));
        doubleSpinBox_17->setSingleStep(0.01);
        doubleSpinBox_17->setValue(0.24);
        doubleSpinBox_20 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_20->setObjectName(QStringLiteral("doubleSpinBox_20"));
        doubleSpinBox_20->setGeometry(QRect(120, 220, 51, 22));
        doubleSpinBox_20->setSingleStep(0.01);
        doubleSpinBox_20->setValue(0.23);
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 20));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 10, 61, 20));
        doubleSpinBox_2 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(30, 60, 51, 22));
        doubleSpinBox_2->setSingleStep(1);
        doubleSpinBox_2->setValue(3);
        doubleSpinBox_3 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(30, 80, 51, 22));
        doubleSpinBox_3->setSingleStep(1);
        doubleSpinBox_3->setValue(1);
        doubleSpinBox_4 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(30, 100, 51, 22));
        doubleSpinBox_4->setSingleStep(1);
        doubleSpinBox_4->setValue(2);
        doubleSpinBox_5 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(30, 120, 51, 22));
        doubleSpinBox_5->setSingleStep(1);
        doubleSpinBox_5->setValue(0);
        doubleSpinBox_6 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(30, 140, 51, 22));
        doubleSpinBox_6->setSingleStep(1);
        doubleSpinBox_6->setValue(0);
        doubleSpinBox_7 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setGeometry(QRect(30, 160, 51, 22));
        doubleSpinBox_7->setSingleStep(1);
        doubleSpinBox_7->setValue(0);
        doubleSpinBox_8 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setGeometry(QRect(30, 180, 51, 22));
        doubleSpinBox_8->setSingleStep(1);
        doubleSpinBox_8->setValue(0);
        doubleSpinBox_9 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_9->setObjectName(QStringLiteral("doubleSpinBox_9"));
        doubleSpinBox_9->setGeometry(QRect(30, 200, 51, 22));
        doubleSpinBox_9->setSingleStep(1);
        doubleSpinBox_9->setValue(0);
        doubleSpinBox_10 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_10->setObjectName(QStringLiteral("doubleSpinBox_10"));
        doubleSpinBox_10->setGeometry(QRect(30, 220, 51, 22));
        doubleSpinBox_10->setSingleStep(1);
        doubleSpinBox_10->setValue(0);
        doubleSpinBox_16 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_16->setObjectName(QStringLiteral("doubleSpinBox_16"));
        doubleSpinBox_16->setGeometry(QRect(120, 140, 51, 22));
        doubleSpinBox_16->setSingleStep(0.01);
        doubleSpinBox_16->setValue(0.25);
        doubleSpinBox_12 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_12->setObjectName(QStringLiteral("doubleSpinBox_12"));
        doubleSpinBox_12->setGeometry(QRect(120, 60, 51, 22));
        doubleSpinBox_12->setSingleStep(0.01);
        doubleSpinBox_12->setValue(0.11);
        doubleSpinBox_19 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_19->setObjectName(QStringLiteral("doubleSpinBox_19"));
        doubleSpinBox_19->setGeometry(QRect(120, 200, 51, 22));
        doubleSpinBox_19->setSingleStep(0.01);
        doubleSpinBox_19->setValue(0.29);
        doubleSpinBox_18 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_18->setObjectName(QStringLiteral("doubleSpinBox_18"));
        doubleSpinBox_18->setGeometry(QRect(120, 180, 51, 22));
        doubleSpinBox_18->setSingleStep(0.01);
        doubleSpinBox_18->setValue(0.28);
        doubleSpinBox_15 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_15->setObjectName(QStringLiteral("doubleSpinBox_15"));
        doubleSpinBox_15->setGeometry(QRect(120, 120, 51, 22));
        doubleSpinBox_15->setSingleStep(0.01);
        doubleSpinBox_15->setValue(0.27);
        doubleSpinBox_13 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_13->setObjectName(QStringLiteral("doubleSpinBox_13"));
        doubleSpinBox_13->setGeometry(QRect(120, 80, 51, 22));
        doubleSpinBox_13->setSingleStep(0.01);
        doubleSpinBox_13->setValue(0.3);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 40, 16, 16));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 60, 16, 16));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 80, 16, 16));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 100, 16, 16));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 120, 16, 16));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 140, 16, 16));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 160, 16, 16));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 180, 16, 16));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 200, 16, 16));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(6, 220, 20, 20));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(100, 40, 16, 16));
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(100, 60, 16, 16));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(100, 100, 16, 16));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(100, 180, 16, 16));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(96, 220, 20, 20));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(100, 160, 16, 16));
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(100, 80, 16, 16));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(100, 200, 16, 16));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(100, 140, 16, 16));
        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(100, 120, 16, 16));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 70, 75, 23));
        checkBox_Sin = new QCheckBox(tab_2);
        checkBox_Sin->setObjectName(QStringLiteral("checkBox_Sin"));
        checkBox_Sin->setGeometry(QRect(180, 10, 70, 17));
        checkBox_Sin->setChecked(false);
        widget_3 = new QCustomPlot(tab_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 250, 311, 221));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(180, 110, 131, 51));
        doubleSpinBox_porog = new QDoubleSpinBox(groupBox);
        doubleSpinBox_porog->setObjectName(QStringLiteral("doubleSpinBox_porog"));
        doubleSpinBox_porog->setGeometry(QRect(10, 20, 51, 22));
        doubleSpinBox_porog->setMaximum(2000);
        doubleSpinBox_porog->setSingleStep(0.1);
        doubleSpinBox_porog->setValue(1);
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 20, 51, 21));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(245, 170, 61, 21));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(180, 170, 51, 20));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 200, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_OpenFile = new QPushButton(tab_3);
        pushButton_OpenFile->setObjectName(QStringLiteral("pushButton_OpenFile"));
        pushButton_OpenFile->setGeometry(QRect(10, 40, 75, 23));
        checkBox_DataFromFile = new QCheckBox(tab_3);
        checkBox_DataFromFile->setObjectName(QStringLiteral("checkBox_DataFromFile"));
        checkBox_DataFromFile->setGeometry(QRect(20, 10, 101, 17));
        checkBox_DataFromFile->setChecked(true);
        tabWidget->addTab(tab_3, QString());
        doubleSpinBox_N1 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_N1->setObjectName(QStringLiteral("doubleSpinBox_N1"));
        doubleSpinBox_N1->setEnabled(false);
        doubleSpinBox_N1->setGeometry(QRect(1330, 630, 51, 22));
        doubleSpinBox_N1->setDecimals(0);
        doubleSpinBox_N1->setMaximum(100);
        doubleSpinBox_N1->setSingleStep(1);
        doubleSpinBox_N1->setValue(0);
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setEnabled(false);
        label_28->setGeometry(QRect(1270, 630, 51, 16));
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(1250, 160, 82, 17));
        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(1250, 180, 121, 17));
        pushButton_Polyg_Interp = new QPushButton(centralWidget);
        pushButton_Polyg_Interp->setObjectName(QStringLiteral("pushButton_Polyg_Interp"));
        pushButton_Polyg_Interp->setGeometry(QRect(1280, 480, 75, 23));
        shiftbox = new QDoubleSpinBox(centralWidget);
        shiftbox->setObjectName(QStringLiteral("shiftbox"));
        shiftbox->setGeometry(QRect(1330, 450, 51, 21));
        shiftbox->setDecimals(0);
        shiftbox->setMinimum(-1000);
        shiftbox->setMaximum(1000);
        shiftbox->setSingleStep(1);
        shiftbox->setValue(0);
        pushButton_IncrWnds = new QPushButton(centralWidget);
        pushButton_IncrWnds->setObjectName(QStringLiteral("pushButton_IncrWnds"));
        pushButton_IncrWnds->setGeometry(QRect(1280, 510, 81, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1290, 450, 31, 16));
        checkBox_UseInterp = new QCheckBox(centralWidget);
        checkBox_UseInterp->setObjectName(QStringLiteral("checkBox_UseInterp"));
        checkBox_UseInterp->setGeometry(QRect(1250, 270, 131, 17));
        comboBox_WndNumber = new QComboBox(centralWidget);
        comboBox_WndNumber->setObjectName(QStringLiteral("comboBox_WndNumber"));
        comboBox_WndNumber->setGeometry(QRect(1310, 70, 71, 22));
        comboBox_SignalLength = new QComboBox(centralWidget);
        comboBox_SignalLength->setObjectName(QStringLiteral("comboBox_SignalLength"));
        comboBox_SignalLength->setGeometry(QRect(1310, 40, 71, 22));
        spinBox_Step = new QSpinBox(centralWidget);
        spinBox_Step->setObjectName(QStringLiteral("spinBox_Step"));
        spinBox_Step->setGeometry(QRect(1310, 10, 42, 22));
        spinBox_Step->setMaximum(1000);
        spinBox_Step->setValue(1);
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(1240, 10, 31, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1396, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(shiftbox, SIGNAL(valueChanged(double)), pushButton_Polyg_Interp, SLOT(click()));

        tabWidget->setCurrentIndex(2);
        comboBox_WndNumber->setCurrentIndex(2);
        comboBox_SignalLength->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Generate signal", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Spectrogram", 0));
        label_5->setText(QApplication::translate("MainWindow", "Signal length:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Window:", 0));
        pushButton_3->setText(QString());
        radioButton->setText(QApplication::translate("MainWindow", "Fourea", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Korrelogram", 0));
        label_4->setText(QApplication::translate("MainWindow", "Signal:  U[i]=A*sin(w1*t[i] + alpha*lfm[i])", 0));
        a_mean_3->setText(QApplication::translate("MainWindow", "Amplitude:", 0));
        a_mean->setText(QApplication::translate("MainWindow", "alpha (a):", 0));
        label_2->setText(QApplication::translate("MainWindow", "w1:", 0));
        a_mean_2->setText(QApplication::translate("MainWindow", "a (\320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\321\200\320\265\321\203\320\263):", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "LFM", 0));
        label->setText(QApplication::translate("MainWindow", "Amplitude:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Frequency:", 0));
        label_8->setText(QApplication::translate("MainWindow", "1:", 0));
        label_9->setText(QApplication::translate("MainWindow", "2:", 0));
        label_10->setText(QApplication::translate("MainWindow", "3:", 0));
        label_11->setText(QApplication::translate("MainWindow", "4:", 0));
        label_12->setText(QApplication::translate("MainWindow", "5:", 0));
        label_13->setText(QApplication::translate("MainWindow", "6:", 0));
        label_14->setText(QApplication::translate("MainWindow", "7:", 0));
        label_15->setText(QApplication::translate("MainWindow", "8:", 0));
        label_16->setText(QApplication::translate("MainWindow", "9:", 0));
        label_17->setText(QApplication::translate("MainWindow", "10:", 0));
        label_18->setText(QApplication::translate("MainWindow", "1:", 0));
        label_19->setText(QApplication::translate("MainWindow", "2:", 0));
        label_20->setText(QApplication::translate("MainWindow", "4:", 0));
        label_21->setText(QApplication::translate("MainWindow", "8:", 0));
        label_22->setText(QApplication::translate("MainWindow", "10:", 0));
        label_23->setText(QApplication::translate("MainWindow", "7:", 0));
        label_24->setText(QApplication::translate("MainWindow", "3:", 0));
        label_25->setText(QApplication::translate("MainWindow", "9:", 0));
        label_26->setText(QApplication::translate("MainWindow", "6:", 0));
        label_27->setText(QApplication::translate("MainWindow", "5:", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Signal", 0));
        checkBox_Sin->setText(QApplication::translate("MainWindow", "Sinus", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Threshold:", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_29->setText(QApplication::translate("MainWindow", "Singular", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Spectrs", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Sin", 0));
        pushButton_OpenFile->setText(QApplication::translate("MainWindow", "Open...", 0));
        checkBox_DataFromFile->setText(QApplication::translate("MainWindow", "Read from file", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "File", 0));
        label_28->setText(QApplication::translate("MainWindow", "Noise, %:", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "Multitaper", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "Autoregression Burg", 0));
        pushButton_Polyg_Interp->setText(QApplication::translate("MainWindow", "Polyg Interp", 0));
        pushButton_IncrWnds->setText(QApplication::translate("MainWindow", "Increase Wnds", 0));
        label_7->setText(QApplication::translate("MainWindow", "shift:", 0));
        checkBox_UseInterp->setText(QApplication::translate("MainWindow", "Use Polygharm Interp", 0));
        comboBox_WndNumber->clear();
        comboBox_WndNumber->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "64", 0)
         << QApplication::translate("MainWindow", "128", 0)
         << QApplication::translate("MainWindow", "256", 0)
         << QApplication::translate("MainWindow", "512", 0)
         << QApplication::translate("MainWindow", "1024", 0)
         << QApplication::translate("MainWindow", "2048", 0)
         << QApplication::translate("MainWindow", "4096", 0)
         << QApplication::translate("MainWindow", "8192", 0)
         << QApplication::translate("MainWindow", "16384", 0)
        );
        comboBox_SignalLength->clear();
        comboBox_SignalLength->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8192", 0)
         << QApplication::translate("MainWindow", "16384", 0)
         << QApplication::translate("MainWindow", "32768", 0)
         << QApplication::translate("MainWindow", "65536", 0)
         << QApplication::translate("MainWindow", "131072", 0)
         << QApplication::translate("MainWindow", "262144", 0)
         << QApplication::translate("MainWindow", "524288", 0)
         << QApplication::translate("MainWindow", "1048576", 0)
        );
        label_30->setText(QApplication::translate("MainWindow", "Step:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
