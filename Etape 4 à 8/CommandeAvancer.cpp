/**
 * Project Untitled
 */


#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::commandeStat("AVANCER");

CommandeAvancer::CommandeAvancer(std::string name) : CommandeRobot(name), previousX(0), previousY(0)
{
}

CommandeAvancer::CommandeAvancer(int x, int y) : previousX(0), previousY(0), moveToX(x), moveToY(y)
{
    
}

Commande* CommandeAvancer::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandeAvancer(lect.x, lect.y);
}

void CommandeAvancer::execute()
{
    previousX = robot->x;
    previousY = robot->y;
    robot->avancer(moveToX, moveToY);
    pileDefaire.push(this);
}

void CommandeAvancer::defaire()
{
    robot->avancer(previousX, previousY);
}

/**
 * CommandeAvancer implementation
 */


