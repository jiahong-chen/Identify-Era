#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_yolov2_Console.h"

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

class QT_yolov2_Console : public QMainWindow
{
	Q_OBJECT

public:
	QT_yolov2_Console(QWidget *parent = Q_NULLPTR);

private slots:
	void file_ck();
	void cfgfile_ck();
	void start();
	void send_return_signal();

signals:
	void go_back();

private:
	Ui::QT_yolov2_ConsoleClass ui;

	vector<std::string> obj_names;

	Mat draw_image;				//顯示圖像
	fstream fin;				//開啟檔案

	string int2str(int &i);
	void yolo_main(string);		//yolo 主程式
	void draw_label_image();	//畫至show_image_label
	void show_label_list();		//list 顯示所有類別
	int load_yolo_ini(string);	//載入yolo相關ini文件檔
	void yolo_reload(int);		//yolo重新載入新weights
	void progressbar(QProgressDialog*);
};
