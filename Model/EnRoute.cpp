/**
 * Project Untitled
 */


#include "EnRoute.h"

/**
 * EnRoute implementation
 */

EnRoute EnRoute::instanceUnique;

/**
 * @return EtatRobot
 */
EtatRobot* EnRoute::figer() {
    etatPrecedent = *(this);
    return new Fige();
}

EnRoute EnRoute::instance()
{
    return instanceUnique;
}
