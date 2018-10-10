/********************************************************************************
** Form generated from reading UI file 'QT_yolov2_Console.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_YOLOV2_CONSOLE_H
#define UI_QT_YOLOV2_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_yolov2_ConsoleClass
{
public:
    QWidget *centralWidget;
    QPushButton *file_button;
    QLineEdit *path_editline;
    QListWidget *listWidget;
    QLabel *show_image_label;
    QPushButton *cfgfile_button;
    QLineEdit *line_cfg;
    QPushButton *start_button;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QT_yolov2_ConsoleClass)
    {
        if (QT_yolov2_ConsoleClass->objectName().isEmpty())
            QT_yolov2_ConsoleClass->setObjectName(QStringLiteral("QT_yolov2_ConsoleClass"));
        QT_yolov2_ConsoleClass->resize(1920, 1080);
        QT_yolov2_ConsoleClass->setStyleSheet(QStringLiteral("background-color: rgb(52, 52, 52);"));
        centralWidget = new QWidget(QT_yolov2_ConsoleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        file_button = new QPushButton(centralWidget);
        file_button->setObjectName(QStringLiteral("file_button"));
        file_button->setGeometry(QRect(200, 800, 350, 120));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(20);
        file_button->setFont(font);
        file_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF"));
        path_editline = new QLineEdit(centralWidget);
        path_editline->setObjectName(QStringLiteral("path_editline"));
        path_editline->setGeometry(QRect(600, 830, 700, 60));
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
        listWidget->setGeometry(QRect(1400, 139, 350, 551));
        listWidget->setFont(font);
        listWidget->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF"));
        show_image_label = new QLabel(centralWidget);
        show_image_label->setObjectName(QStringLiteral("show_image_label"));
        show_image_label->setGeometry(QRect(200, 75, 1100, 450));
        show_image_label->setMaximumSize(QSize(25535, 25535));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setWeight(75);
        show_image_label->setFont(font2);
        show_image_label->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF"));
        show_image_label->setScaledContents(false);
        show_image_label->setAlignment(Qt::AlignCenter);
        cfgfile_button = new QPushButton(centralWidget);
        cfgfile_button->setObjectName(QStringLiteral("cfgfile_button"));
        cfgfile_button->setGeometry(QRect(200, 600, 350, 120));
        cfgfile_button->setFont(font);
        cfgfile_button->setAutoFillBackground(false);
        cfgfile_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF"));
        line_cfg = new QLineEdit(centralWidget);
        line_cfg->setObjectName(QStringLiteral("line_cfg"));
        line_cfg->setEnabled(true);
        line_cfg->setGeometry(QRect(600, 630, 700, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        line_cfg->setFont(font3);
        line_cfg->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF"));
        line_cfg->setReadOnly(true);
        start_button = new QPushButton(centralWidget);
        start_button->setObjectName(QStringLiteral("start_button"));
        start_button->setGeometry(QRect(1480, 810, 200, 100));
        start_button->setFont(font);
        start_button->setStyleSheet(QLatin1String("border-radius: 25px;\n"
"border: 3px solid #FFFFFF;\n"
"color: #FFFFFF"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1460, 70, 231, 41));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:#FFFFFF"));
        QT_yolov2_ConsoleClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QT_yolov2_ConsoleClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 25));
        QT_yolov2_ConsoleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QT_yolov2_ConsoleClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QT_yolov2_ConsoleClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QT_yolov2_ConsoleClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QT_yolov2_ConsoleClass->setStatusBar(statusBar);

        retranslateUi(QT_yolov2_ConsoleClass);

        QMetaObject::connectSlotsByName(QT_yolov2_ConsoleClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_yolov2_ConsoleClass)
    {
        QT_yolov2_ConsoleClass->setWindowTitle(QApplication::translate("QT_yolov2_ConsoleClass", "QT_yolov2_Console", Q_NULLPTR));
        file_button->setText(QApplication::translate("QT_yolov2_ConsoleClass", "\351\201\270\346\223\207\345\275\261\345\203\217\346\252\224", Q_NULLPTR));
        show_image_label->setText(QApplication::translate("QT_yolov2_ConsoleClass", "\345\275\261\345\203\217\346\252\224", Q_NULLPTR));
        cfgfile_button->setText(QApplication::translate("QT_yolov2_ConsoleClass", "\351\201\270\346\223\207\347\211\271\345\276\265\346\252\224", Q_NULLPTR));
        line_cfg->setText(QApplication::translate("QT_yolov2_ConsoleClass", "tiny-yolo-voc.cfg", Q_NULLPTR));
        start_button->setText(QApplication::translate("QT_yolov2_ConsoleClass", "\351\226\213\345\247\213", Q_NULLPTR));
        label->setText(QApplication::translate("QT_yolov2_ConsoleClass", "\345\275\261\345\203\217\345\205\247\345\220\253\347\211\251\345\220\215\347\250\261", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_yolov2_ConsoleClass: public Ui_QT_yolov2_ConsoleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_YOLOV2_CONSOLE_H
