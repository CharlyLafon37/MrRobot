/**
 * Project Untitled
 */


#include "EnRoute.h"

/**
 * EnRoute implementation
 */

/**
 * @return EtatRobot
 */
EtatRobot* EnRoute::figer() {
    etatPrecedent = this;
    return Fige::instance();
}
