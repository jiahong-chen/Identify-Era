#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_classifier_Classification.h"

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

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
#include <QLineEdit>
#include <QDebug>
#include <QProgressDialog>

using namespace std;
using namespace cv;

class QT_classifier_Classification : public QMainWindow
{
	Q_OBJECT

public:
	QT_classifier_Classification(QWidget *parent = Q_NULLPTR);

private slots:
	void send_return_signal();

signals:
	void go_back();

private:
	Ui::QT_classifier_ClassificationClass ui;
};
