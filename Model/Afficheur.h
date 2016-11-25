/**
 * Project Untitled
 */


#ifndef _AFFICHEUR_H
#define _AFFICHEUR_H

#include <iostream>
#include "Robot.h"

class Robot;

class Afficheur{
public: 
    
    virtual void afficher(Robot& robot) const = 0;
    
private:
   
};

#endif //_AFFICHEUR_H
