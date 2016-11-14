/**
 * Project Untitled
 */


#ifndef _AVIDE_H
#define _AVIDE_H

#include "EnRoute.h"


class AVide: public EnRoute {
public: 
    
    EtatRobot avancer();
    
    EtatRobot tourner();
    
    EtatRobot rencontrerPlot();
};

#endif //_AVIDE_H