/**
 * Project Untitled
 */


#include "Fige.h"

/**
 * Fige implementation
 */

Fige::Fige(EtatRobot* etatPrec)
{
    etatPrecedent = etatPrec;
}

EtatRobot* Fige::repartir() {
    return etatPrecedent;
}

std::string Fige::getNameEtat()
{
    return "Fige";
}
