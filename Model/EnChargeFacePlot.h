/**
 * Project Untitled
 */


#ifndef _ENCHARGEFACEPLOT_H
#define _ENCHARGEFACEPLOT_H

#include "EnRoute.h"


class EnChargeFacePlot: public EnRoute {
public: 
    
    EtatRobot poser();
    
    EtatRobot peser();
    
    EtatRobot evaluerPlot();
    
    EtatRobot tourner();
};

#endif //_ENCHARGEFACEPLOT_H