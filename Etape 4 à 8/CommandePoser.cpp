/**
 * Project Untitled
 */


#include "CommandePoser.h"

CommandePoser CommandePoser::commandeStat("POSER");

CommandePoser::CommandePoser(std::string name) : CommandeRobot(name)
{
}

Commande* CommandePoser::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandePoser();
}

void CommandePoser::execute()
{
    robot->poser();
    pileDefaire.push(this);
}

/**
 * CommandePoser implementation
 */


