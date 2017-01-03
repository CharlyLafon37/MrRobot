/**
 * Project Untitled
 */


#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot CommandeEvaluerPlot::commandeStat("EVALUERPLOT");

CommandeEvaluerPlot::CommandeEvaluerPlot(std::string name) : CommandeRobot(name)
{
}

Commande* CommandeEvaluerPlot::constructeurVirtuel()
{
    return new CommandeEvaluerPlot();
}

void CommandeEvaluerPlot::execute()
{
    robot->evaluerPlot();
}

/**
 * CommandeEvaluerPlot implementation
 */


