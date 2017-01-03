/**
 * Project Untitled
 */


#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::commandeStat("AVANCER");

CommandeAvancer::CommandeAvancer(std::string name) : CommandeRobot(name), previousX(0), previousY(0)
{
}

CommandeAvancer::CommandeAvancer() : previousX(0), previousY(0)
{
    
}

Commande* CommandeAvancer::constructeurVirtuel()
{
    return new CommandeAvancer();
}

void CommandeAvancer::execute()
{
    
}

/**
 * CommandeAvancer implementation
 */


