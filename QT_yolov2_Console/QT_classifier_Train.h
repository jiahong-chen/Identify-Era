#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_classifier_Train.h"

#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <direct.h>
#include <thread>
#include <atomic>
#include <io.h>

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QTextCodec>
#include <QTimer>
#include <QLabel>
#include <QMessageBox>
#include <QProcess>
#include <QLineEdit>
#include <QDebug>
#include <QProgressDialog>

using namespace std;

class QT_classifier_Train : public QMainWindow
{
	Q_OBJECT

public:
	QT_classifier_Train(QWidget *parent = Q_NULLPTR);

private slots:
	void send_return_signal();
	void path_ck();
	void start();

signals:
	void go_back();

private:
	Ui::QT_classifier_trainClass ui;
};
