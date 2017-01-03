/**
 * Project Untitled
 */


#ifndef _COMMANDETOURNER_H
#define _COMMANDETOURNER_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"

class CommandeTourner : public CommandeRobot{
public:
    CommandeTourner(std::string name);
    CommandeTourner(std::string direction, std::string useless);
    
    virtual void execute();
    virtual void defaire();
    virtual Commande* constructeurVirtuel(LecteurFichier& lect);
    
private:
    std::string turnToDirection, previousDirection;
    static CommandeTourner commandeStat;
};

#endif //_COMMANDETOURNER_H
