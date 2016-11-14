/**
 * Project Untitled
 */


#ifndef _ENCHARGE_H
#define _ENCHARGE_H

#include "EnRoute.h"


class EnCharge: public EnRoute {
public: 
    
    EtatRobot avancer();
    
    EtatRobot tourner();
    
    EtatRobot peser();
    
    EtatRobot rencontrerPlot();
};

#endif //_ENCHARGE_H