/**
 * Project Untitled
 */


#include "AVide.h"
#include "AVideFacePlot.h"

/**
 * AVide implementation
 */

/**
 * @return EtatRobot
 */
EtatRobot* AVide::avancer() {
    return AVide::instance();
}

/**
 * @return EtatRobot
 */
EtatRobot* AVide::tourner() {
    return new AVide();
}

/**
 * @return EtatRobot
 */
EtatRobot* AVide::rencontrerPlot() {
    return new AVideFacePlot();
}

EnRoute AVide::instance()
{
    return instanceUnique;
}
