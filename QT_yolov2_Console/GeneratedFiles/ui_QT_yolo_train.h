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
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QMainWindow *QT_yolo_TrainClass)
    {
        if (QT_yolo_TrainClass->objectName().isEmpty())
            QT_yolo_TrainClass->setObjectName(QStringLiteral("QT_yolo_TrainClass"));
        QT_yolo_TrainClass->resize(1920, 1080);
        QT_yolo_TrainClass->setStyleSheet(QStringLiteral("background-image:url(\"blackboard.jpg\")"));
        centralwidget = new QWidget(QT_yolo_TrainClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(770, 950, 221, 81));
        pushButton->setStyleSheet(QStringLiteral("background-image: url(\"\")"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 1600, 800));
        QT_yolo_TrainClass->setCentralWidget(centralwidget);

        retranslateUi(QT_yolo_TrainClass);

        QMetaObject::connectSlotsByName(QT_yolo_TrainClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_yolo_TrainClass)
    {
        QT_yolo_TrainClass->setWindowTitle(QApplication::translate("QT_yolo_TrainClass", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QT_yolo_TrainClass", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("QT_yolo_TrainClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_yolo_TrainClass: public Ui_QT_yolo_TrainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_YOLO_TRAIN_H
