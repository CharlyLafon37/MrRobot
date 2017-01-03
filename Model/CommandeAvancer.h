/**
 * Project Untitled
 */


#ifndef _COMMANDEAVANCER_H
#define _COMMANDEAVANCER_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeAvancer : public CommandeRobot{
public:
    CommandeAvancer(std::string name);
    CommandeAvancer();
    
    virtual void execute();
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier lect);
    
private:
    int previousX, previousY;
    static CommandeAvancer commandeStat;
};

#endif //_COMMANDEAVANCER_H
