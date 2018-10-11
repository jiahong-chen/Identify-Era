/********************************************************************************
** Form generated from reading UI file 'QT_index.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_INDEX_H
#define UI_QT_INDEX_H

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

class Ui_QT_indexClass
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *detection_clk;
    QPushButton *classifier_clk;
    QPushButton *exit;

    void setupUi(QMainWindow *QT_indexClass)
    {
        if (QT_indexClass->objectName().isEmpty())
            QT_indexClass->setObjectName(QStringLiteral("QT_indexClass"));
        QT_indexClass->setEnabled(true);
        QT_indexClass->resize(1920, 1080);
        QT_indexClass->setMouseTracking(false);
        QT_indexClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        QT_indexClass->setToolTipDuration(-1);
        QT_indexClass->setStyleSheet(QLatin1String("background-image: url(\"robot.png\")\n"
""));
        QT_indexClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        QT_indexClass->setDockNestingEnabled(false);
        centralwidget = new QWidget(QT_indexClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 280, 1060, 100));
        QFont font;
        font.setFamily(QStringLiteral("Spacer"));
        font.setPointSize(84);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-image: url(\"\");\n"
"color: rgba(255,255,255,0.8);"));
        detection_clk = new QPushButton(centralwidget);
        detection_clk->setObjectName(QStringLiteral("detection_clk"));
        detection_clk->setGeometry(QRect(710, 450, 500, 130));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(28);
        detection_clk->setFont(font1);
        detection_clk->setStyleSheet(QLatin1String("background-image: url(\"\");\n"
"border-radius:60px;\n"
"border: 7px solid #FFFFFF;\n"
"color:rgba(255,255,255,1)"));
        classifier_clk = new QPushButton(centralwidget);
        classifier_clk->setObjectName(QStringLiteral("classifier_clk"));
        classifier_clk->setGeometry(QRect(710, 625, 500, 130));
        classifier_clk->setFont(font1);
        classifier_clk->setStyleSheet(QLatin1String("background-image: url(\"\");\n"
"border-radius:60px;\n"
"border: 7px solid #FFFFFF;\n"
"color:rgba(255,255,255,1)"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(710, 800, 500, 130));
        exit->setFont(font1);
        exit->setStyleSheet(QLatin1String("background-image: url(\"\");\n"
"border-radius:60px;\n"
"border: 7px solid #FFFFFF;\n"
"color:rgba(255,255,255,1)"));
        QT_indexClass->setCentralWidget(centralwidget);

        retranslateUi(QT_indexClass);

        QMetaObject::connectSlotsByName(QT_indexClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_indexClass)
    {
        QT_indexClass->setWindowTitle(QApplication::translate("QT_indexClass", "Identify Era", Q_NULLPTR));
        label->setText(QApplication::translate("QT_indexClass", "IDENTIFY ERA", Q_NULLPTR));
        detection_clk->setText(QApplication::translate("QT_indexClass", "OBJECT DETECTION", Q_NULLPTR));
        classifier_clk->setText(QApplication::translate("QT_indexClass", "OBJECT CLASSIFIER", Q_NULLPTR));
        exit->setText(QApplication::translate("QT_indexClass", "EXIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_indexClass: public Ui_QT_indexClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_INDEX_H
