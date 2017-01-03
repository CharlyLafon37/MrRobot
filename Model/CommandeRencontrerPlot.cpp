/**
 * Project Untitled
 */


#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot CommandeRencontrerPlot::commandeStat("RENCONTRERPLOT");

CommandeRencontrerPlot::CommandeRencontrerPlot(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeRencontrerPlot::constructeurVirtuel()
{
    return new CommandeRencontrerPlot();
}

/**
 * CommandeRencontrerPlot implementation
 */


