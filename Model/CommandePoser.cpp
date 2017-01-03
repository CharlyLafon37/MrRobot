/**
 * Project Untitled
 */


#include "CommandePoser.h"

CommandePoser CommandePoser::commandeStat("POSER");

CommandePoser::CommandePoser(std::string name) : CommandeRobot(name)
{
}

Commande* CommandePoser::constructeurVirtuel()
{
    return new CommandePoser();
}

void CommandePoser::execute()
{
    robot->poser();
}

/**
 * CommandePoser implementation
 */


