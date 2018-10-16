#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_yolo_Train.h"

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

#include <iostream>

#include <QMainWindow>
#include <QTextCodec>
#include <QTimer>
#include <QLabel>
#include <QDebug>

using namespace std;
using namespace cv;

class QT_yolo_Train : public QMainWindow
{
	Q_OBJECT

public:
	QT_yolo_Train(QWidget *parent = Q_NULLPTR);

private slots:
	void getframe();
	void on_pushButton_clicked();

signals:
	

private:
	Ui::QT_yolo_TrainClass ui;
	cv::VideoCapture video;
	cv::Mat src_frame;
	QTimer *timer;
	QImage qimg;
};
