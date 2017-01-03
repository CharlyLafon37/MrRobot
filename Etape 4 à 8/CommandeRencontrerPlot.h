/**
 * Project Untitled
 */


#ifndef _COMMANDERENCONTRERPLOT_H
#define _COMMANDERENCONTRERPLOT_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Plot.h"

class CommandeRencontrerPlot : public CommandeRobot{
public:
    CommandeRencontrerPlot(std::string name);
    CommandeRencontrerPlot(Plot& plot);
    
    virtual void execute();
    virtual void defaire();
    virtual Commande* constructeurVirtuel(LecteurFichier& lect);
    
private:
    Plot* plotToMeet;
    static CommandeRencontrerPlot commandeStat;
};

#endif //_COMMANDERENCONTRERPLOT_H
