/**
 * Project Untitled
 */


#ifndef _COMMANDEREPARTIR_H
#define _COMMANDEREPARTIR_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeRepartir : public CommandeRobot{
public:
    CommandeRepartir(std::string name);
    CommandeRepartir() {};
    
    virtual void execute();
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier& lect);
    
private:
    static CommandeRepartir commandeStat;
};

#endif //_COMMANDEREPARTIR_H
