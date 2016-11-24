/**
 * Project Untitled
 */


#ifndef _FIGE_H
#define _FIGE_H

#include "EtatRobot.h"


class Fige: public EtatRobot {
public: 
    
    EtatRobot* repartir();
    virtual static Fige instance();
    
private:
    
    static Fige instanceUnique;
};

#endif //_FIGE_H
