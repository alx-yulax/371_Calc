#include <QApplication>
#include <QPushButton>

/********************************************************************************
** Form generated from reading UI file 'calcCvikdJ.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CALCCVIKDJ_H
#define CALCCVIKDJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <iostream>

QT_BEGIN_NAMESPACE
enum class Signs{
    plus,
    minus,
    mult,
    div
};

class QLineEditMy;

class CalcMainWindow : public QMainWindow {
Q_OBJECT

public:
    QLineEdit *lineEdit_1 = nullptr;
    QLineEdit *lineEdit_2 = nullptr;
    QLineEdit *lineEditCurrent = nullptr;
    QLineEdit *lineEdit_result = nullptr;


    CalcMainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
    }

    void mousePressEvent(QMouseEvent *e) {
        std::cout << this << std::endl;
    }

public slots:

    void setCurrentQLineEdit(QLineEdit *in_lineEditCurrent) {
        lineEditCurrent = in_lineEditCurrent;
    };

    void add0() { lineEditCurrent->setText(lineEditCurrent->text() + "0"); };

    void add1() { lineEditCurrent->setText(lineEditCurrent->text() + "1"); };

    void add2() { lineEditCurrent->setText(lineEditCurrent->text() + "2"); };

    void add3() { lineEditCurrent->setText(lineEditCurrent->text() + "3"); };

    void add4() { lineEditCurrent->setText(lineEditCurrent->text() + "4"); };

    void add5() { lineEditCurrent->setText(lineEditCurrent->text() + "5"); };

    void add6() { lineEditCurrent->setText(lineEditCurrent->text() + "6"); };

    void add7() { lineEditCurrent->setText(lineEditCurrent->text() + "7"); };

    void add8() { lineEditCurrent->setText(lineEditCurrent->text() + "8"); };

    void add9() { lineEditCurrent->setText(lineEditCurrent->text() + "9"); };

    void addDot() { lineEditCurrent->setText(lineEditCurrent->text() + "."); };

    void calc(Signs sign) {
        bool aOk;
        bool bOk;
        double a = lineEdit_1->text().toDouble(&aOk);
        double b = lineEdit_2->text().toDouble(&bOk);
        if (aOk && bOk) {
            if (sign == Signs::plus) {
                lineEdit_result->setText(QString::number(a + b));
            } else if (sign == Signs::minus) {
                lineEdit_result->setText(QString::number(a - b));
            } else if (sign == Signs::mult) {
                lineEdit_result->setText(QString::number(a * b));
            } else if (sign == Signs::div) {
                lineEdit_result->setText(QString::number(a / b));
            } else {
                lineEdit_result->setText("ERROR");
            }

        } else {
            lineEdit_result->setText("ERROR");
        }
    }

    void plus() { calc(Signs::plus);};
    void minus() { calc(Signs::minus); };
    void mult() { calc(Signs::mult); };
    void div() { calc(Signs::div); };
};

class QLineEditCalc : public QLineEdit {
Q_OBJECT
public:
    QLineEditCalc(QWidget *parent = nullptr) : QLineEdit(parent) {
    }

    void mousePressEvent(QMouseEvent *event) {
        emit changeCurrentQLineEdit(this);
    }

signals:

    void changeCurrentQLineEdit(QLineEdit *in_lineEdit_DigitCurrent);
};


class Ui_MainWindow {
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEditCalc *lineEdit_2;
    QLineEditCalc *lineEdit_1;
    QLineEdit *lineEdit_result;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(699, 505);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_2 = new QLineEditCalc(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        lineEdit_2->setFont(font);

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_1 = new QLineEditCalc(centralwidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        sizePolicy.setHeightForWidth(lineEdit_1->sizePolicy().hasHeightForWidth());
        lineEdit_1->setSizePolicy(sizePolicy);
        lineEdit_1->setFont(font);

        horizontalLayout->addWidget(lineEdit_1);


        verticalLayout->addLayout(horizontalLayout);

        lineEdit_result = new QLineEdit(centralwidget);
        lineEdit_result->setObjectName(QString::fromUtf8("lineEdit_result"));
        sizePolicy.setHeightForWidth(lineEdit_result->sizePolicy().hasHeightForWidth());
        lineEdit_result->setSizePolicy(sizePolicy);
        lineEdit_result->setFont(font);

        verticalLayout->addWidget(lineEdit_result);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(0, 0));
        pushButton_1->setFont(font);

        horizontalLayout_2->addWidget(pushButton_1);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setFont(font);

        gridLayout->addWidget(pushButton_11, 2, 1, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFont(font);

        gridLayout->addWidget(pushButton_12, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 0, 2, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setFont(font);

        gridLayout->addWidget(pushButton_10, 2, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setFont(font);

        gridLayout->addWidget(pushButton_13, 3, 0, 1, 2);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setFont(font);

        gridLayout->addWidget(pushButton_14, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 699, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(plus()));
        QObject::connect(lineEdit_2, SIGNAL(changeCurrentQLineEdit(QLineEdit * )), MainWindow,
                         SLOT(setCurrentQLineEdit(QLineEdit * )));
        QObject::connect(lineEdit_1, SIGNAL(changeCurrentQLineEdit(QLineEdit * )), MainWindow,
                         SLOT(setCurrentQLineEdit(QLineEdit * )));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(minus()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(mult()));
        QObject::connect(pushButton_1, SIGNAL(clicked()), MainWindow, SLOT(div()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(add7()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(add8()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(add9()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(add4()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(add5()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(add6()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(add1()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(add2()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), MainWindow, SLOT(add3()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), MainWindow, SLOT(add0()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), MainWindow, SLOT(addDot()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // CALCCVIKDJ_H


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    Ui_MainWindow calc;
    calc.setupUi(&window);
    window.lineEdit_1 = calc.lineEdit_1;
    window.lineEdit_2 = calc.lineEdit_2;
    window.lineEditCurrent = calc.lineEdit_2;
    window.lineEdit_result = calc.lineEdit_result;


    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}

#include "main.moc"
