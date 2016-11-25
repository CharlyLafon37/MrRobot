/**
 * Project Untitled
 */


#include "AVide.h"
#include "AVideFacePlot.h"

/**
 * AVide implementation
 */

AVide* AVide::instanceUnique = nullptr;

AVide::AVide()
{
    
}

/**
 * @return EtatRobot
 */
EtatRobot* AVide::avancer() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* AVide::tourner() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* AVide::rencontrerPlot() {
    return nullptr;
}

std::string AVide::getNameEtat()
{
    return "AVide";
}

EtatRobot* AVide::instance()
{
    if(instanceUnique == nullptr)
        instanceUnique = new AVide();
    return instanceUnique;
}
