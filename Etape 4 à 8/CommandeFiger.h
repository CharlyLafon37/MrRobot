/**
 * Project Untitled
 */


#ifndef _COMMANDEFIGER_H
#define _COMMANDEFIGER_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeFiger : public CommandeRobot{
public:
    CommandeFiger(std::string name);
    CommandeFiger() {};
    
    virtual void execute();
    virtual void defaire();
    virtual Commande* constructeurVirtuel(LecteurFichier& lect);
    
private:
    static CommandeFiger commandeStat;
};

#endif //_COMMANDEFIGER_H
