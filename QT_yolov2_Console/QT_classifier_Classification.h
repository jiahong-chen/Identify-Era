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
#include <QProcess>
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
	void file_ck();
	void pbfile_ck();
	void start();

signals:
	void go_back();

private:
	Ui::QT_classifier_ClassificationClass ui;

	Mat draw_image;

	void inception_main(String);
	void show_label_list(QProcess*);
	void draw_label_image(String);
	int load_pb_ini(string);
};
