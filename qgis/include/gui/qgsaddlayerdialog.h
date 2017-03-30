/***************************************************************************
                         qgsbrowserdialog.h
                             -------------------
    begin                : January 2015
    copyright            : (C) 2015 by U Gyong Il
    email                : 
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSADDLAYERDIALOG_H
#define QGSADDLAYERDIALOG_H

#include <QDialog>
#include "ui_qgsaddlayerdialogbase.h"

class QgsBrowserModel;
class QgsDataItem;
class QStandardItemModel;

class GUI_EXPORT QgsBrowseDialog :public QDialog , private Ui::QgsAddLayerDialog
{
	Q_OBJECT
public:

	/** 
	   Constructor
	 * @param parent   parent of this dialog
	 * @param caption  window title  
	 * @param path     initial path ,for example "C:/"
	 */
	explicit QgsBrowseDialog(QWidget *parent = 0,
							 const QString &caption = QString(),
		                     const QString &path = QString());
	~QgsBrowseDialog();
	
	/**
	 * Returns the list of absolute path of selected file
	 */
	QStringList selectedFiles();

	/**
	 * Returns the list of absolute path of selected directory
	 */
	QStringList selectedDirectories();

	/**
	 * Returns the list of absolute path of selected vector data
	 */
	QStringList selectedVectorLayers();

	/**
	 * Returns the list of absolute path of selected raster data
	 */
	QStringList selectedRasterLayers();

	QStringList selectedDatabaseLayers(QString& providerkey);

protected:
	virtual void accept();

private slots:
	void on_lookInCombo_activated(int index);
	void on_treeView_activated(const QModelIndex &index);

	void on_backButton_clicked();
	void on_forwardButton_clicked();
	void on_toParentButton_clicked();

	void on_listModeButton_clicked();
	void on_detailModeButton_clicked();

	void selectionChanged();

private:
	/**
	 * Initialize of dialog. This is called from constructor only once. 
	 * @param caption  window title  
	 * @param path     initial path ,for example "C:/"
	 */
	void init(QString directory,QString caption);

	/**
	 * Create widgets and establishes signal and slot connecting.
	 */
	void createWidgets();

	/**
	 * Create toolbuttons and establishes connecting
	 */
	void createToolButtons();

	/**
	 * Following members initializes a given special widget.
	 */
	void lookInComboInit();
	void fileNameEditInit();
	void treeViewInit();
	void listViewInit();

	/**
	 *  Set current path of dialog for browsing 
	 */
	void setPath(const QString &path);

	/**
	 *  Set current path of dialog for browsing 
	 */
	void setPath(QgsDataItem* item);

	/**
	 *  Set current path of dialog for browsing 
	 */
	void setPath(const QModelIndex & index);

	/**
	 * Set the root index of listView and treeView
	 * @param index QModelIndex  
	 */
	inline void setRootIndex(const QModelIndex &index) const;

	/**
	 *  Update history for backword and forward 
	 */
	void updateHistory(const QModelIndex &index);


	/**
	 * Update lookinCombo
	 */
	void updateLookinCombo(const QModelIndex& index);

private:
	QgsBrowserModel*    mBrowseModel;
	QModelIndexList     mCurrentHistory;
	int                 mCurrentHistoryLocation;

	QStandardItemModel* mLookinModel;
	QTreeView*          mLookinTree;
};

#endif