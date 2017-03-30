#include "marinetitlelabel.h"

QRect MarineTitleLabel::m_MarkRect=QRect(0,0,32,35);
QRect MarineTitleLabel::m_TitleRect=QRect(43,0,220,35);


#include "marinesystem.h"
#include "mainwindow.h"

void MarineTitleLabel::mousePressEvent(QMouseEvent* event)
{
	if(m_TitleRect.contains(event->pos()))
	{
		//g_app->GetMainWindow()->About();
	}

	if(m_MarkRect.contains(event->pos()))
	{
		//g_app->GetMainWindow()->About();
	}
}

void MarineTitleLabel::mouseDoubleClickEvent(QMouseEvent* event)
{
	if(m_MarkRect.contains(event->pos()))
	{
		//g_app->GetMainWindow()->About();
	}
}