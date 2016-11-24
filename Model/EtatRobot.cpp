/**
 * Project Untitled
 */


#include "EtatRobot.h"

/**
 * EtatRobot implementation
 */

EtatRobot EtatRobot::instanceUnique;

/**
 * @return EtatRobot
 */
EtatRobot EtatRobot::avancer() {
    return null;
}

/**
 * @return EtatRobot
 */
EtatRobot EtatRobot::tourner() {
    return null;
}

/**
 * @return EtatRobot
 */
EtatRobot EtatRobot::saisir() {
    throw UndefinedMethodException();
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::poser() {
    return null;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::peser() {
    return null;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::rencontrerPlot() {
    return null;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::evaluerPlot() {
    return null;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::figer() {
    throw UndefinedMethodException();
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::repartir() {
    throw UndefinedMethodException();
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::afficher() {
    return null;
}

void EtatRobot::EtatRobot() {

}
