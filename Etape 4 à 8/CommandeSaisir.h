/**
 * Project Untitled
 */


#ifndef _COMMANDESAISIR_H
#define _COMMANDESAISIR_H

#include <iostream>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Objet.h"

class CommandeSaisir : public CommandeRobot{
public:
    CommandeSaisir(std::string name);
    CommandeSaisir(Objet& objet);
    
    virtual void execute();
    virtual void defaire();
    virtual Commande* constructeurVirtuel(LecteurFichier& lect);
    
private:
    Objet* objectToGrab;
    static CommandeSaisir commandeStat;
};

#endif //_COMMANDESAISIR_H
