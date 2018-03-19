#include "AddDialog.h"

AddDialog::AddDialog(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);

	cityTree->setColumnCount(1);
	cityTree->setHeaderLabel(tr("select city"));

	typedef QMap<QString, QList<QString>> CityMap;

	CityMap cityMap;
	cityMap["china"] << "beijing" << "shanghai" << "suzhou";
	cityMap["americ"] << "new york" << "Washington";

	for (CityMap::iterator i = cityMap.begin(); i != cityMap.end(); i++)
	{
		QTreeWidgetItem *country = new QTreeWidgetItem(cityTree, QStringList(QString(i.key())));
		if (!i.value().empty())
		{
			for each (auto var in i.value())
			{
				QTreeWidgetItem *city = new QTreeWidgetItem(country, QStringList(QString(var))); //вс╫з╣Ц1
				country->addChild(city);
			}
		}
	}
	cityTree->expandAll();

	connect(cityTree, SIGNAL(itemSelectionChanged()), this, SLOT(showSelectedImg()));
}

void AddDialog::showSelectedImg() {
	QString city;
	if (cityTree->currentItem()->parent())
	{
		city = QString("%1-%2").arg(cityTree->currentItem()->parent()->text(0)).arg(cityTree->currentItem()->text(0));
	}
	else if (cityTree->currentItem())
	{
		city = cityTree->currentItem()->text(0);
	}
	else
	{
		city = QString();
	}

	showCityLabel->setText(city);
}

AddDialog::~AddDialog()
{
}
