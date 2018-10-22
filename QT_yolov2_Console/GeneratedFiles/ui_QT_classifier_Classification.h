/********************************************************************************
** Form generated from reading UI file 'QT_classifier_Classification.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_CLASSIFIER_CLASSIFICATION_H
#define UI_QT_CLASSIFIER_CLASSIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_classifier_ClassificationClass
{
public:
    QWidget *centralWidget;
    QPushButton *file_button;
    QLineEdit *path_editline;
    QListWidget *listWidget;
    QLabel *show_image_label;
    QPushButton *pbfile_button;
    QLineEdit *line_pb;
    QPushButton *start;
    QLabel *label;
    QPushButton *return_button;

    void setupUi(QMainWindow *QT_classifier_ClassificationClass)
    {
        if (QT_classifier_ClassificationClass->objectName().isEmpty())
            QT_classifier_ClassificationClass->setObjectName(QStringLiteral("QT_classifier_ClassificationClass"));
        QT_classifier_ClassificationClass->resize(1920, 1080);
        QT_classifier_ClassificationClass->setStyleSheet(QStringLiteral("background-image: url(\"blackboard.jpg\")"));
        centralWidget = new QWidget(QT_classifier_ClassificationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        file_button = new QPushButton(centralWidget);
        file_button->setObjectName(QStringLiteral("file_button"));
        file_button->setGeometry(QRect(200, 840, 350, 120));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(20);
        file_button->setFont(font);
        file_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        path_editline = new QLineEdit(centralWidget);
        path_editline->setObjectName(QStringLiteral("path_editline"));
        path_editline->setGeometry(QRect(600, 870, 700, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(14);
        path_editline->setFont(font1);
        path_editline->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF"));
        path_editline->setReadOnly(true);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(1400, 139, 350, 385));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font2.setPointSize(16);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
""));
        show_image_label = new QLabel(centralWidget);
        show_image_label->setObjectName(QStringLiteral("show_image_label"));
        show_image_label->setGeometry(QRect(200, 75, 1100, 450));
        show_image_label->setMaximumSize(QSize(25535, 25535));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font3.setPointSize(48);
        font3.setBold(true);
        font3.setWeight(75);
        show_image_label->setFont(font3);
        show_image_label->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        show_image_label->setScaledContents(false);
        show_image_label->setAlignment(Qt::AlignCenter);
        pbfile_button = new QPushButton(centralWidget);
        pbfile_button->setObjectName(QStringLiteral("pbfile_button"));
        pbfile_button->setGeometry(QRect(200, 600, 350, 120));
        pbfile_button->setFont(font);
        pbfile_button->setAutoFillBackground(false);
        pbfile_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        line_pb = new QLineEdit(centralWidget);
        line_pb->setObjectName(QStringLiteral("line_pb"));
        line_pb->setEnabled(true);
        line_pb->setGeometry(QRect(600, 630, 700, 60));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        line_pb->setFont(font4);
        line_pb->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;"));
        line_pb->setReadOnly(true);
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(1470, 730, 200, 100));
        start->setFont(font);
        start->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1427, 70, 290, 40));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color:#FFFFFF;\n"
"background-image: url(\"\")"));
        return_button = new QPushButton(centralWidget);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setGeometry(QRect(1470, 860, 200, 100));
        return_button->setFont(font);
        return_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        QT_classifier_ClassificationClass->setCentralWidget(centralWidget);

        retranslateUi(QT_classifier_ClassificationClass);

        QMetaObject::connectSlotsByName(QT_classifier_ClassificationClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_classifier_ClassificationClass)
    {
        QT_classifier_ClassificationClass->setWindowTitle(QApplication::translate("QT_classifier_ClassificationClass", "Identify Era", Q_NULLPTR));
        file_button->setText(QApplication::translate("QT_classifier_ClassificationClass", "\351\201\270\346\223\207\345\275\261\345\203\217\346\252\224", Q_NULLPTR));
        show_image_label->setText(QApplication::translate("QT_classifier_ClassificationClass", "\345\275\261\345\203\217\346\252\224", Q_NULLPTR));
        pbfile_button->setText(QApplication::translate("QT_classifier_ClassificationClass", "\351\201\270\346\223\207\346\250\241\345\236\213\346\252\224", Q_NULLPTR));
        line_pb->setText(QString());
        start->setText(QApplication::translate("QT_classifier_ClassificationClass", "\351\226\213\345\247\213", Q_NULLPTR));
        label->setText(QApplication::translate("QT_classifier_ClassificationClass", "\345\275\261\345\203\217\350\276\250\350\255\230\345\272\246\345\211\215TOP5", Q_NULLPTR));
        return_button->setText(QApplication::translate("QT_classifier_ClassificationClass", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_classifier_ClassificationClass: public Ui_QT_classifier_ClassificationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_CLASSIFIER_CLASSIFICATION_H
