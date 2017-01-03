/**
 * Project Untitled
 */


#ifndef _COMMANDERENCONTRERPLOT_H
#define _COMMANDERENCONTRERPLOT_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeRencontrerPlot : public CommandeRobot{
public:
    CommandeRencontrerPlot(std::string name);
    CommandeRencontrerPlot() {};
    
    virtual void execute() {};
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier lect);
    
private:
    static CommandeRencontrerPlot commandeStat;
};

#endif //_COMMANDERENCONTRERPLOT_H
