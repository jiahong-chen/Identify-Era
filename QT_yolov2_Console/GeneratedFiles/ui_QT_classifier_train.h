/********************************************************************************
** Form generated from reading UI file 'QT_classifier_train.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_CLASSIFIER_TRAIN_H
#define UI_QT_CLASSIFIER_TRAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_classifier_trainClass
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *path_button;
    QPushButton *start;
    QLabel *label;
    QPushButton *return_button;
    QLineEdit *pb_editline;
    QLineEdit *path_editline;
    QLineEdit *train_editline;

    void setupUi(QMainWindow *QT_classifier_trainClass)
    {
        if (QT_classifier_trainClass->objectName().isEmpty())
            QT_classifier_trainClass->setObjectName(QStringLiteral("QT_classifier_trainClass"));
        QT_classifier_trainClass->resize(1920, 1080);
        QT_classifier_trainClass->setStyleSheet(QStringLiteral("background-image: url(\"blackboard.jpg\")"));
        centralwidget = new QWidget(QT_classifier_trainClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 300, 770, 170));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(48);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-image: url(\"\");\n"
"color:#FFFFFF"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 530, 370, 170));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-image: url(\"\");\n"
"color:#FFFFFF"));
        path_button = new QPushButton(centralwidget);
        path_button->setObjectName(QStringLiteral("path_button"));
        path_button->setGeometry(QRect(1480, 460, 201, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(26);
        path_button->setFont(font1);
        path_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image:url(\"\")"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(1600, 800, 201, 91));
        start->setFont(font1);
        start->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image:url(\"\")"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 60, 740, 170));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-image: url(\"\");\n"
"color:#FFFFFF"));
        return_button = new QPushButton(centralwidget);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setGeometry(QRect(1600, 925, 201, 91));
        return_button->setFont(font1);
        return_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image:url(\"\")"));
        pb_editline = new QLineEdit(centralwidget);
        pb_editline->setObjectName(QStringLiteral("pb_editline"));
        pb_editline->setGeometry(QRect(250, 230, 1200, 70));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(25);
        pb_editline->setFont(font2);
        pb_editline->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;"));
        path_editline = new QLineEdit(centralwidget);
        path_editline->setObjectName(QStringLiteral("path_editline"));
        path_editline->setGeometry(QRect(250, 470, 1200, 70));
        path_editline->setFont(font2);
        path_editline->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;"));
        train_editline = new QLineEdit(centralwidget);
        train_editline->setObjectName(QStringLiteral("train_editline"));
        train_editline->setGeometry(QRect(250, 690, 1200, 70));
        train_editline->setFont(font2);
        train_editline->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;"));
        QT_classifier_trainClass->setCentralWidget(centralwidget);
        label_2->raise();
        label_3->raise();
        label->raise();
        path_button->raise();
        start->raise();
        return_button->raise();
        pb_editline->raise();
        path_editline->raise();
        train_editline->raise();

        retranslateUi(QT_classifier_trainClass);

        QMetaObject::connectSlotsByName(QT_classifier_trainClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_classifier_trainClass)
    {
        QT_classifier_trainClass->setWindowTitle(QApplication::translate("QT_classifier_trainClass", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("QT_classifier_trainClass", "\350\250\223\347\267\264\345\275\261\345\203\217\350\263\207\346\226\231\345\244\276\350\267\257\345\276\221", Q_NULLPTR));
        label_3->setText(QApplication::translate("QT_classifier_trainClass", "\350\250\223\347\267\264\346\254\241\346\225\270", Q_NULLPTR));
        path_button->setText(QApplication::translate("QT_classifier_trainClass", "\351\201\270\346\223\207\350\267\257\345\276\221", Q_NULLPTR));
        start->setText(QApplication::translate("QT_classifier_trainClass", "\351\226\213\345\247\213", Q_NULLPTR));
        label->setText(QApplication::translate("QT_classifier_trainClass", "\346\250\241\345\236\213\346\252\224\345\220\215\347\250\261(\351\231\220\350\213\261\346\226\207)", Q_NULLPTR));
        return_button->setText(QApplication::translate("QT_classifier_trainClass", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_classifier_trainClass: public Ui_QT_classifier_trainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_CLASSIFIER_TRAIN_H
