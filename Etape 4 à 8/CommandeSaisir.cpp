/**
 * Project Untitled
 */


#include "CommandeSaisir.h"

CommandeSaisir CommandeSaisir::commandeStat("SAISIR");

CommandeSaisir::CommandeSaisir(std::string name) : CommandeRobot(name)
{
}

CommandeSaisir::CommandeSaisir(Objet& objet)
{
    objectToGrab = &objet;
}

Commande* CommandeSaisir::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandeSaisir(lect.objet);
}

void CommandeSaisir::execute()
{
    robot->saisir(*objectToGrab);
    pileDefaire.push(this);
}

void CommandeSaisir::defaire()
{
    robot->objet = nullptr;
}

/**
 * CommandeSaisir implementation
 */


