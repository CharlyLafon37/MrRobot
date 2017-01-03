/**
 * Project Untitled
 */


#include "CommandePeser.h"

CommandePeser CommandePeser::commandeStat("PESER");

CommandePeser::CommandePeser(std::string name) : CommandeRobot(name)
{
}

Commande* CommandePeser::constructeurVirtuel()
{
    return new CommandePeser();
}

void CommandePeser::execute()
{
    robot->peser();
}

/**
 * CommandePeser implementation
 */


