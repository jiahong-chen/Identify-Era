/********************************************************************************
** Form generated from reading UI file 'QT_classifier_index.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_CLASSIFIER_INDEX_H
#define UI_QT_CLASSIFIER_INDEX_H

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

class Ui_QT_classifier_IndexClass
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *train_button;
    QPushButton *classification_button;
    QPushButton *return_button;

    void setupUi(QMainWindow *QT_classifier_IndexClass)
    {
        if (QT_classifier_IndexClass->objectName().isEmpty())
            QT_classifier_IndexClass->setObjectName(QStringLiteral("QT_classifier_IndexClass"));
        QT_classifier_IndexClass->resize(1920, 1080);
        QT_classifier_IndexClass->setStyleSheet(QStringLiteral("background-image: url(\"blackboard.jpg\")"));
        centralwidget = new QWidget(QT_classifier_IndexClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 150, 1280, 160));
        QFont font;
        font.setFamily(QStringLiteral("Spacer"));
        font.setPointSize(72);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color:#FFFFFF;\n"
"background-image: url(\"\")"));
        train_button = new QPushButton(centralwidget);
        train_button->setObjectName(QStringLiteral("train_button"));
        train_button->setGeometry(QRect(710, 400, 500, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(48);
        train_button->setFont(font1);
        train_button->setStyleSheet(QLatin1String("border-radius: 55px;\n"
"border: 10px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        classification_button = new QPushButton(centralwidget);
        classification_button->setObjectName(QStringLiteral("classification_button"));
        classification_button->setGeometry(QRect(710, 600, 500, 150));
        classification_button->setFont(font1);
        classification_button->setStyleSheet(QLatin1String("border-radius: 55px;\n"
"border: 10px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        return_button = new QPushButton(centralwidget);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setGeometry(QRect(710, 800, 500, 150));
        return_button->setFont(font1);
        return_button->setStyleSheet(QLatin1String("border-radius: 55px;\n"
"border: 10px solid #FFFFFF;\n"
"color: #FFFFFF;\n"
"background-image: url(\"\")"));
        QT_classifier_IndexClass->setCentralWidget(centralwidget);

        retranslateUi(QT_classifier_IndexClass);

        QMetaObject::connectSlotsByName(QT_classifier_IndexClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_classifier_IndexClass)
    {
        QT_classifier_IndexClass->setWindowTitle(QApplication::translate("QT_classifier_IndexClass", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("QT_classifier_IndexClass", "OBJECT CLASSIFIER", Q_NULLPTR));
        train_button->setText(QApplication::translate("QT_classifier_IndexClass", "Train", Q_NULLPTR));
        classification_button->setText(QApplication::translate("QT_classifier_IndexClass", "Classification", Q_NULLPTR));
        return_button->setText(QApplication::translate("QT_classifier_IndexClass", "Rrturn", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_classifier_IndexClass: public Ui_QT_classifier_IndexClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_CLASSIFIER_INDEX_H
