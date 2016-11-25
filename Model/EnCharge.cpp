/**
 * Project Untitled
 */


#include "EnCharge.h"

/**
 * EnCharge implementation
 */

EnCharge* EnCharge::instanceUnique = nullptr;

EnCharge::EnCharge()
{
    
}

/**
 * @return EtatRobot
 */
EtatRobot* EnCharge::avancer() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EnCharge::tourner() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EnCharge::peser() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EnCharge::rencontrerPlot() {
    return nullptr;
}

std::string EnCharge::getNameEtat()
{
    return "EnCharge";
}

EtatRobot* EnCharge::instance()
{
    if(instanceUnique == nullptr)
        instanceUnique = new EnCharge();
    return instanceUnique;
}
