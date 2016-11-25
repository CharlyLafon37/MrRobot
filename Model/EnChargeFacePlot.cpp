/**
 * Project Untitled
 */


#include "EnChargeFacePlot.h"

/**
 * EnChargeFacePlot implementation
 */

EnChargeFacePlot* EnChargeFacePlot::instanceUnique = nullptr;

EnChargeFacePlot::EnChargeFacePlot()
{
    
}

/**
 * @return EtatRobot
 */
EtatRobot* EnChargeFacePlot::poser() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EnChargeFacePlot::peser() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EnChargeFacePlot::evaluerPlot() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EnChargeFacePlot::tourner() {
    return nullptr;
}

std::string EnChargeFacePlot::getNameEtat()
{
    return "EnChargeFacePlot";
}

EtatRobot* EnChargeFacePlot::instance()
{
    if(instanceUnique == nullptr)
        instanceUnique = new EnChargeFacePlot();
    return instanceUnique;
}
