/**
 * Project Untitled
 */


#ifndef _AVIDEFACEPLOT_H
#define _AVIDEFACEPLOT_H

#include "EnRoute.h"


class AVideFacePlot: public EnRoute {
public: 
    
    EtatRobot tourner();
    
    EtatRobot evaluerPlot();
    
    EtatRobot saisir();
};

#endif //_AVIDEFACEPLOT_H