/**
 * Project Untitled
 */


#include "AVideFacePlot.h"
#include "AVide.h"
#include "EnChargeFacePlot.h"

/**
 * AVideFacePlot implementation
 */

AVideFacePlot* AVideFacePlot::instanceUnique = nullptr;

AVideFacePlot::AVideFacePlot()
{
    
}

/**
 * @return EtatRobot
 */
EtatRobot* AVideFacePlot::tourner() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* AVideFacePlot::evaluerPlot() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* AVideFacePlot::saisir() {
    return EnChargeFacePlot::instance();
}

EtatRobot* AVideFacePlot::instance()
{
    if(instanceUnique == nullptr)
        instanceUnique  = new AVideFacePlot();
    return instanceUnique;
}
