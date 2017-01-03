/**
 * Project Untitled
 */


#ifndef _COMMANDEPOSER_H
#define _COMMANDEPOSER_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandePoser : public CommandeRobot{
public:
    CommandePoser(std::string name);
    CommandePoser() {};
    
    virtual void execute();
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier& lect);
    
private:
    static CommandePoser commandeStat;
};

#endif //_COMMANDEPOSER_H
