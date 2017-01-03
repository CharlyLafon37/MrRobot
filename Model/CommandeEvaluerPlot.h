/**
 * Project Untitled
 */


#ifndef _COMMANDEEVALUERPLOT_H
#define _COMMANDEEVALUERPLOT_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeEvaluerPlot : public CommandeRobot{
public:
    CommandeEvaluerPlot(std::string name);
    CommandeEvaluerPlot() {};
    
    virtual void execute();
    virtual void defaire() {};
    virtual Commande* constructeurVirtuel(LecteurFichier lect);
    
private:
    static CommandeEvaluerPlot commandeStat;
};

#endif //_COMMANDEEVALUERPLOT_H
