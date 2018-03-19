#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtDemo.h"

class QtDemo : public QMainWindow
{
	Q_OBJECT

public:
	QtDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtDemoClass ui;
};
