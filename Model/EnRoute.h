/**
 * Project Untitled
 */


#ifndef _ENROUTE_H
#define _ENROUTE_H

#include "EtatRobot.h"


class EnRoute: public EtatRobot {
public: 
    
    EtatRobot* figer();
    virtual static EnRoute instance() = 0;
    
private:
    
    static EnRoute instanceUnique;
};

#endif //_ENROUTE_H
