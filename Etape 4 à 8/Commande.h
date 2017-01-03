/**
 * Project Untitled
 */


#ifndef _COMMANDE_H
#define _COMMANDE_H

#include <iostream>
#include <stack>
#include <map>
#include "LecteurFichier.h"

class LecteurFichier;

class Commande{
public:
    Commande(std::string commandName);
    Commande();
    
    static std::map<std::string, Commande*>& commandesInscrites();
    static Commande* nouvelleCommande(std::string commandName, LecteurFichier& lect);
    virtual Commande* constructeurVirtuel(LecteurFichier& lect) = 0;
    virtual void execute() = 0;
    virtual void defaire() = 0;
    
protected:
    static std::stack<Commande*> pileDefaire;
};

#endif //_COMMANDE_H
