/**
 * Project Untitled
 */


#include "Fige.h"

/**
 * Fige implementation
 */

Fige* Fige::instanceUnique = nullptr;

/**
 * @return EtatRobot
 */
EtatRobot* Fige::repartir() {
    return etatPrecedent;
}

EtatRobot* Fige::instance(){
    if(instanceUnique == nullptr)
        instanceUnique = new Fige();
    return instanceUnique;
}
