/**
 * Project Untitled
 */


#include "CommandeRepartir.h"

CommandeRepartir CommandeRepartir::commandeStat("REPARTIR");

CommandeRepartir::CommandeRepartir(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeRepartir::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandeRepartir();
}

void CommandeRepartir::execute()
{
    robot->repartir();
    pileDefaire.push(this);
}

/**
 * CommandeRepartir implementation
 */


