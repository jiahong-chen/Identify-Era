/********************************************************************************
** Form generated from reading UI file 'QT_yolo_train.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_YOLO_TRAIN_H
#define UI_QT_YOLO_TRAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_yolo_TrainClass
{
public:
    QWidget *centralwidget;
    QPushButton *start;
    QLabel *label;
    QPushButton *pause;
    QPushButton *return_button;

    void setupUi(QMainWindow *QT_yolo_TrainClass)
    {
        if (QT_yolo_TrainClass->objectName().isEmpty())
            QT_yolo_TrainClass->setObjectName(QStringLiteral("QT_yolo_TrainClass"));
        QT_yolo_TrainClass->resize(1920, 1080);
        QT_yolo_TrainClass->setStyleSheet(QStringLiteral("background-image:url(\"blackboard.jpg\")"));
        centralwidget = new QWidget(QT_yolo_TrainClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(860, 925, 80, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(48);
        start->setFont(font);
        start->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\");\n"
"background-color: rgba(255,255,255,0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 50, 1600, 800));
        label->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        pause = new QPushButton(centralwidget);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setGeometry(QRect(980, 925, 80, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        pause->setFont(font1);
        pause->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\");\n"
"background-color: rgba(255,255,255,0);"));
        return_button = new QPushButton(centralwidget);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setGeometry(QRect(1610, 925, 150, 80));
        return_button->setFont(font1);
        return_button->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\");\n"
"background-color: rgba(255,255,255,0);"));
        QT_yolo_TrainClass->setCentralWidget(centralwidget);

        retranslateUi(QT_yolo_TrainClass);

        QMetaObject::connectSlotsByName(QT_yolo_TrainClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_yolo_TrainClass)
    {
        QT_yolo_TrainClass->setWindowTitle(QApplication::translate("QT_yolo_TrainClass", "MainWindow", Q_NULLPTR));
        start->setText(QApplication::translate("QT_yolo_TrainClass", "\342\226\266", Q_NULLPTR));
        label->setText(QString());
        pause->setText(QApplication::translate("QT_yolo_TrainClass", "\342\235\231\342\235\231", Q_NULLPTR));
        return_button->setText(QApplication::translate("QT_yolo_TrainClass", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_yolo_TrainClass: public Ui_QT_yolo_TrainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_YOLO_TRAIN_H
