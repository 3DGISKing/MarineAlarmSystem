#ifndef MARINESHIPINFORMATIONWIDGET_H
#define MARINESHIPINFORMATIONWIDGET_H

#include <QWidget>
#include "ui_marineshipinformationwidget.h"

#include "qgisimport.h"
#include "qgsfeature.h"

class MarineShipInformationWidget : public QWidget
{
	Q_OBJECT

public:
	MarineShipInformationWidget(QWidget *parent = 0);
	~MarineShipInformationWidget();

	void updateShip(QString shipid);
	void displayShipInformation(QgsFeatureId fid);

private slots:
	void shipListTableClicked(int row,int col);

private:
	void popualteShipList();

private:
	Ui::MarineShipInformationWidget ui;

	QgsFeatureId                    mLastDisplayedShipId;
};

#endif // MARINESHIPINFORMATIONWIDGET_H
