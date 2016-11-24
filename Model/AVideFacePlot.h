/**
 * Project Untitled
 */


#ifndef _AVIDEFACEPLOT_H
#define _AVIDEFACEPLOT_H

#include "EnRoute.h"


class AVideFacePlot: public EnRoute {
public: 
    
    virtual EtatRobot* tourner();
    
    virtual EtatRobot* evaluerPlot();
    
    virtual EtatRobot* saisir();
    
    virtual static EnRoute instance();
    
};

#endif //_AVIDEFACEPLOT_H
