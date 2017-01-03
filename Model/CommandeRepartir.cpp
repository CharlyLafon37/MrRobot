/**
 * Project Untitled
 */


#include "CommandeRepartir.h"

CommandeRepartir CommandeRepartir::commandeStat("REPARTIR");

CommandeRepartir::CommandeRepartir(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeRepartir::constructeurVirtuel()
{
    return new CommandeRepartir();
}

void CommandeRepartir::execute()
{
    robot->repartir();
}

/**
 * CommandeRepartir implementation
 */


