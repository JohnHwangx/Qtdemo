#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtDemo.h"

class QtDemo : public QMainWindow
{
	Q_OBJECT

public:
	QtDemo(QWidget *parent = Q_NULLPTR);
	virtual void mouseMoveEvent(QMouseEvent* e);

	private slots:
	void clickAction1();
	void slotLocalTestViewContextMenu(const QPoint &position);
	//void showMouseTrack(QMouseEvent* e);
	void on_addButton_clicked();
	void on_deleteButton_clicked();
	void on_addressList_currentItemChanged();

private:
	Ui::QtDemoClass ui;
};
