#include "mythread.h"
#include <QtCore>
#include <QDebug>

MyThread::MyThread()
{
}

void MyThread::run()
{
	qDebug() << this->name << "Running";

	for(int i = 0 ; i < 50; i++)
	{
		qDebug() << this->name << i;
	}
}
