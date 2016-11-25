/**
 * Project Untitled
 */


#ifndef _FIGE_H
#define _FIGE_H

#include <iostream>
#include "EtatRobot.h"


class Fige: public EtatRobot {
public: 
    
    Fige(EtatRobot* etatPrec);
    
    EtatRobot* repartir();
    virtual std::string getNameEtat();
    
private:
    
    EtatRobot* etatPrecedent;
};

#endif //_FIGE_H
