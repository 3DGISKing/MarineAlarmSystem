#ifndef MARINETITLELABEL_H
#define MARINETITLELABEL_H

#include <QLabel>
#include <QtGui>

class MarineTitleLabel: public QLabel
{
	static QRect m_MarkRect;
	static QRect m_TitleRect;

protected:
	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseDoubleClickEvent(QMouseEvent* event);
};


#endif