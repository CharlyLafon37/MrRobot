/**
 * Project Untitled
 */


#ifndef _AVIDE_H
#define _AVIDE_H

#include "EnRoute.h"


class AVide: public EnRoute {
public: 
    
    virtual EtatRobot avancer();
    
    virtual EtatRobot tourner();
    
    virtual EtatRobot rencontrerPlot();
};

#endif //_AVIDE_H
