/**
 * Project Untitled
 */


#include "AVideFacePlot.h"
#include "AVide.h"
#include "EnChargeFacePlot.h"

/**
 * AVideFacePlot implementation
 */


/**
 * @return EtatRobot
 */
EtatRobot AVideFacePlot::tourner() {
    return new AVide();
}

/**
 * @return EtatRobot
 */
EtatRobot AVideFacePlot::evaluerPlot() {
    return AVideFacePlot::instance();
}

/**
 * @return EtatRobot
 */
EtatRobot AVideFacePlot::saisir() {
    return new EnChargeFacePlot();
}
