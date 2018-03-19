#include "QtDemo.h"
#include "AddDialog.h"
#include <QtWidgets/qmessagebox.h>
#include <QtWidgets/qmenu.h>
#include <QtGui/QKeyEvent>

QtDemo::QtDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QAction* action1 = ui.actionbutton1;
	ui.addressList->setMouseTracking(true);
	connect(action1, &QAction::triggered, this, &QtDemo::clickAction1);
	connect(ui.addressList, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(slotLocalTestViewContextMenu(QPoint)));
	ui.statusBar->showMessage("test mouseTracking");
}

void QtDemo::clickAction1()
{
	QMessageBox::information(this, "about", "OSG-QT-Demo", QMessageBox::Yes);
}

void QtDemo::slotLocalTestViewContextMenu(const QPoint &position)
{
	QModelIndex index = ui.addressList->indexAt(position);
	if (!index.isValid())
	{
		return;
	}

	QMenu *menu = new QMenu(this);
	menu->addAction(new QAction(tr("&Open"), menu));
	menu->addAction(new QAction(tr("&Mark"), menu));
	menu->addAction(new QAction(tr("&Quit"), menu));
	menu->move(cursor().pos()); //让菜单显示的位置在鼠标的坐标上
	menu->show();
}

void QtDemo::mouseMoveEvent(QMouseEvent * e)
{
	// 鼠标事件包含了全局坐标与本地坐标，在此只需要本地坐标即可
	//auto t = ui.addressList->
	QPointF pt = e->localPos();
	// 将坐标点格式化
	QString strShow = QString("location coord: X:%1 Y:%2").arg(pt.x()).arg(pt.y());
	ui.statusBar->showMessage(strShow);
}

void QtDemo::on_addButton_clicked()
{
	AddDialog dialog(this);
	if (dialog.exec()) {
		QString name = dialog.nameEdit->text();
		QString email = dialog.emailEdit->text();
		QString type = dialog.typeComboBox->currentText();

		if (!name.isEmpty() && !email.isEmpty())
		{
			QListWidgetItem *item = new QListWidgetItem(name, ui.addressList);
			item->setData(Qt::UserRole, email);
			item->setData(Qt::UserRole + 1, type);
			ui.addressList->setCurrentItem(item);
		}
	}
}

void QtDemo::on_addressList_currentItemChanged() {
	QListWidgetItem *curItem = ui.addressList->currentItem();
	if (curItem) {
		ui.nameLabel->setText("Name:" + curItem->text());
		ui.emailLabel->setText("Email:" + curItem->data(Qt::UserRole).toString());
		ui.typeLabel->setText("Type:" + curItem->data(Qt::UserRole + 1).toString());
	}
	else
	{
		ui.nameLabel->setText("<No item selected>");
		ui.emailLabel->clear();
		ui.typeLabel->clear();
	}
}

void QtDemo::on_deleteButton_clicked()
{
	QListWidgetItem *curItem = ui.addressList->currentItem();

	if (curItem) {
		int row = ui.addressList->row(curItem);
		ui.addressList->takeItem(row);
		delete curItem;

		if (ui.addressList->count() > 0)
			ui.addressList->setCurrentRow(0);
		else
			on_addressList_currentItemChanged();
	}
}
