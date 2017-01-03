/**
 * Project Untitled
 */


#include "CommandeUndo.h"

CommandeUndo CommandeUndo::commandeStat("UNDO");

CommandeUndo::CommandeUndo(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeUndo::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandeUndo();
}

void CommandeUndo::execute()
{
    pileDefaire.top()->defaire();
    pileDefaire.pop();
}

/**
 * CommandeUndo implementation
 */


