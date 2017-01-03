/**
 * Project Untitled
 */


#include "CommandeFiger.h"

CommandeFiger CommandeFiger::commandeStat("FIGER");

CommandeFiger::CommandeFiger(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeFiger::constructeurVirtuel()
{
    return new CommandeFiger();
}

void CommandeFiger::execute()
{
    robot->figer();
}

/**
 * CommandeFiger implementation
 */


