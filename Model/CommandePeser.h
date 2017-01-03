/**
 * Project Untitled
 */


#ifndef _COMMANDEPESER_H
#define _COMMANDEPESER_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandePeser : public CommandeRobot{
public:
    CommandePeser(std::string name);
    CommandePeser() {};
    
    virtual void execute();
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier lect);
    
private:
    static CommandePeser commandeStat;
};

#endif //_COMMANDEPESER_H
