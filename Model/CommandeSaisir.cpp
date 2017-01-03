/**
 * Project Untitled
 */


#include "CommandeSaisir.h"

CommandeSaisir CommandeSaisir::commandeStat("SAISIR");

CommandeSaisir::CommandeSaisir(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeSaisir::constructeurVirtuel()
{
    return new CommandeSaisir();
}

/**
 * CommandeSaisir implementation
 */


