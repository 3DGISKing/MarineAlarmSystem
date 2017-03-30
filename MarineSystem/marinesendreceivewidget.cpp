#include "marinesendreceivewidget.h"

#include <QProcess>

MarineSendReceiveWidget::MarineSendReceiveWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

MarineSendReceiveWidget::~MarineSendReceiveWidget()
{

}

void MarineSendReceiveWidget::on_mBtnReceive_clicked()
{
	QString path = QCoreApplication::applicationDirPath() + "/ShortWave/ictm/softModem.exe";
	
	int i =QProcess::execute(path);
}

void MarineSendReceiveWidget::on_mBtnSend_clicked()
{

	QString path = QCoreApplication::applicationDirPath() + "/ShortWave/ictm/softModem.exe";

	int i =QProcess::execute(path);
}
