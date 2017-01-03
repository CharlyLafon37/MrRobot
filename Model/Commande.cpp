/**
 * Project Untitled
 */


#include "Commande.h"

std::stack<Commande*> Commande::pileDefaire = *(new std::stack<Commande*>());

Commande::Commande(std::string commandName)
{
    commandesInscrites()[commandName] = this;
}

Commande::Commande()
{
    
}

std::map<std::string, Commande*>& Commande::commandesInscrites()
{
    static std::map<std::string, Commande*>* comInscrites = new std::map<std::string, Commande*>;
    return *comInscrites;
}

Commande* Commande::nouvelleCommande(std::string commandName)
{
    return commandesInscrites()[commandName]->constructeurVirtuel();
}

/**
 * Commande implementation
 */

