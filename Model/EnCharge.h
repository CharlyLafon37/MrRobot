/**
 * Project Untitled
 */


#ifndef _ENCHARGE_H
#define _ENCHARGE_H

#include "EnRoute.h"


class EnCharge: public EnRoute {
public: 
    
    virtual EtatRobot* avancer();
    
    virtual EtatRobot* tourner();
    
    virtual EtatRobot* peser();
    
    virtual EtatRobot* rencontrerPlot();
    
    virtual static EnRoute instance();
};

#endif //_ENCHARGE_H
