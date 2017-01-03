/**
 * Project Untitled
 */


#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot CommandeRencontrerPlot::commandeStat("RENCONTRERPLOT");

CommandeRencontrerPlot::CommandeRencontrerPlot(std::string name) : CommandeRobot(name)
{
}

CommandeRencontrerPlot::CommandeRencontrerPlot(Plot& plot)
{
    plotToMeet = &plot;
}

Commande* CommandeRencontrerPlot::constructeurVirtuel(LecteurFichier& lect)
{
    return new CommandeRencontrerPlot(lect.plot);
}

void CommandeRencontrerPlot::execute()
{
    robot->rencontrerPlot(*plotToMeet);
    pileDefaire.push(this);
}

void CommandeRencontrerPlot::defaire()
{
    robot->plot = nullptr;
}

/**
 * CommandeRencontrerPlot implementation
 */


