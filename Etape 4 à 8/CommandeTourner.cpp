/**
 * Project Untitled
 */


#include "CommandeTourner.h"

CommandeTourner CommandeTourner::commandeStat("TOURNER");

CommandeTourner::CommandeTourner(std::string name) : CommandeRobot(name)
{
}

CommandeTourner::CommandeTourner(std::string direction, std::string useless) : turnToDirection(direction)
{
    
}

Commande* CommandeTourner::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandeTourner(lect.direction, "useless");
}

void CommandeTourner::execute()
{
    previousDirection = robot->direction;
    robot->tourner(turnToDirection);
    pileDefaire.push(this);
}

void CommandeTourner::defaire()
{
    robot->tourner(previousDirection);
}

/**
 * CommandeTourner implementation
 */


