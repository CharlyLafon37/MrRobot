/**
 * Project Untitled
 */


#ifndef _COMMANDESAISIR_H
#define _COMMANDESAISIR_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeSaisir : public CommandeRobot{
public:
    CommandeSaisir(std::string name);
    CommandeSaisir() {};
    
    virtual void execute() {};
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier lect);
    
private:
    static CommandeSaisir commandeStat;
};

#endif //_COMMANDESAISIR_H
