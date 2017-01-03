/**
 * Project Untitled
 */


#include "CommandeTourner.h"

CommandeTourner CommandeTourner::commandeStat("TOURNER");

CommandeTourner::CommandeTourner(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeTourner::constructeurVirtuel()
{
    return new CommandeTourner();
}

/**
 * CommandeTourner implementation
 */


