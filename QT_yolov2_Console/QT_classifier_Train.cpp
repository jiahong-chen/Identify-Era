#define _CRT_SECURE_NO_WARNINGS

#include "QT_classifier_Train.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_classifier_Train::QT_classifier_Train(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//pb檔名稱限定規則
	QRegExp rx("[a-zA-Z]+$");
	QValidator *pb_validator = new QRegExpValidator(rx, ui.pb_editline);
	ui.pb_editline->setValidator(pb_validator);
	//訓練次數限定規則
	QRegExp regx("[0-9]+$");
	QValidator *count_validator = new QRegExpValidator(regx, ui.train_editline);
	ui.train_editline->setValidator(count_validator);
	
	connect(ui.path_button, SIGNAL(clicked()), this, SLOT(path_ck()));
	connect(ui.return_button, SIGNAL(clicked()), this, SLOT(send_return_signal()));
	connect(ui.start, SIGNAL(clicked()), this, SLOT(start()));
}

void QT_classifier_Train::start() {
	FILE *file;
	QProcess *process = new QProcess();
	string pbName = ui.pb_editline->text().toStdString();
	string path = ui.path_editline->text().toStdString();
	string train_count = ui.train_editline->text().toStdString();
	QMessageBox Qmsg;
	if (pbName == "") {
		Qmsg.setText(codec->toUnicode("模型檔名尚未填寫"));
		Qmsg.exec();
		return;
	}
	if (path == "") {
		Qmsg.setText(codec->toUnicode("尚未指定訓練影像路徑"));
		Qmsg.exec();
		return;
	}
	if (train_count == "") {
		Qmsg.setText(codec->toUnicode("次數尚未填寫"));
		Qmsg.exec();
		return;
	}
	if (_access(path.c_str(), 4) != 0) {
		Qmsg.setText(codec->toUnicode("訓練影像路徑不存在"));
		Qmsg.exec();
		return;
	}
	file = fopen("inception_train.cmd", "w+");
	fprintf(file, "activate.bat tf&python retrain.py --bottleneck_dir=./tensorflow/bottlenecks --how_many_training_steps=%s --summaries_dir=./tensorflow/training_summaries/log --output_graph=./tensorflow/data/pb/%s.pb --output_labels=./tensorflow/data/label/%s.txt --architecture=log --image_dir=%s", train_count.c_str(), pbName.c_str(), pbName.c_str(), path.c_str());
	fclose(file);
	process->start("./inception_train.cmd");
	process->waitForStarted();
	process->waitForFinished();
}

void QT_classifier_Train::path_ck() {
	QFileDialog myFileDialog(this);
	QString s = myFileDialog.getExistingDirectory(this, codec->toUnicode("選擇訓練影像路徑"), QDir::currentPath());
	ui.path_editline->setText(s);
}

void QT_classifier_Train::send_return_signal() {
	emit go_back();
}