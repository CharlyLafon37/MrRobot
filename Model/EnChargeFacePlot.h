/**
 * Project Untitled
 */


#ifndef _ENCHARGEFACEPLOT_H
#define _ENCHARGEFACEPLOT_H

#include "EnRoute.h"


class EnChargeFacePlot: public EnRoute {
public: 
    
    virtual EtatRobot* poser();
    
    virtual EtatRobot* peser();
    
    virtual EtatRobot* evaluerPlot();
    
    virtual EtatRobot* tourner();
    
    virtual static EnRoute instance();
    
};

#endif //_ENCHARGEFACEPLOT_H
