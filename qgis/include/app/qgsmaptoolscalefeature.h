/***************************************************************************
    qgsmaptoolscalefeature.h  -  map tool for scaling features by mouse drag
    ---------------------
    begin                : January 2014
    copyright            : (C) 2014 by FSIC.PDR
    email                : 
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSMAPTOOLSCALEFEATURE_H
#define QGSMAPTOOLSCALEFEATURE_H

#include "qgsmaptooledit.h"
#include "qgsvectorlayer.h"

class QgsVertexMarker;

class APP_EXPORT QgsMapToolScaleFeature: public QgsMapToolEdit
{
	Q_OBJECT
public:
	QgsMapToolScaleFeature( QgsMapCanvas* canvas );
	virtual ~QgsMapToolScaleFeature();

	virtual void canvasMoveEvent( QMouseEvent * e );

	virtual void canvasPressEvent( QMouseEvent * e );

	virtual void canvasReleaseEvent( QMouseEvent * e );

	void keyPressEvent( QKeyEvent* e );

	void keyReleaseEvent( QKeyEvent* e );


	//! to reset the rotation anchor to selectionbound center
	void resetAnchor();
	//! called when map tool is being deactivated
	void deactivate();

	void activate();


private:

	QgsPoint mStartPointMapCoords;
	QgsPoint mInitialPos;
	QgsPoint mSnappedPoint;
	/**Rubberband that shows the feature being moved*/
	QgsRubberBand* mRubberBand;

	/**Id of scaled feature*/
	QgsFeatureIds mScaledFeatures;
	double mScale;

	QPoint mStPoint;
	QgsVertexMarker* mAnchorPoint;
	/** flag if crtl is pressed */
	bool mCtrl;
};

#endif
