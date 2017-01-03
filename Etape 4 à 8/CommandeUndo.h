/**
 * Project Untitled
 */


#ifndef _COMMANDEUNDO_H
#define _COMMANDEUNDO_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeUndo : public CommandeRobot{
public:
    CommandeUndo(std::string name);
    CommandeUndo() {};
    
    virtual void execute();
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier& lect);
    
private:
    static CommandeUndo commandeStat;
};

#endif //_COMMANDEUNDO_H
