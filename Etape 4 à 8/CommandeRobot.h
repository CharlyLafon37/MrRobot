/**
 * Project Untitled
 */


#ifndef _COMMANDEROBOT_H
#define _COMMANDEROBOT_H

#include <iostream>
#include "Commande.h"
#include "Robot.h"

class CommandeRobot : public Commande{
public:
    CommandeRobot(std::string name);
    CommandeRobot() {};
    
protected:
    static Robot* robot;
};

#endif //_COMMANDEROBOT_H
