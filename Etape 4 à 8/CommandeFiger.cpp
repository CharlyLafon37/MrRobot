/**
 * Project Untitled
 */


#include "CommandeFiger.h"

CommandeFiger CommandeFiger::commandeStat("FIGER");

CommandeFiger::CommandeFiger(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeFiger::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandeFiger();
}

void CommandeFiger::execute()
{
    robot->figer();
    pileDefaire.push(this);
}

void CommandeFiger::defaire()
{
    robot->repartir();
}

/**
 * CommandeFiger implementation
 */


