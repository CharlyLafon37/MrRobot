/**
 * Project Untitled
 */


#include "Fige.h"

/**
 * Fige implementation
 */

Fige Fige::instanceUnique;

/**
 * @return EtatRobot
 */
EtatRobot* Fige::repartir() {
    return &(instance());
}

Fige Fige::instance(){
    return instanceUnique;
}
