/**
 * Project Untitled
 */


#include "EtatRobot.h"

/**
 * EtatRobot implementation
 */

EtatRobot::UndefinedMethodException::UndefinedMethodException(std::string errorMessage) : msg("Action : " + errorMessage + " impossible")
{
    
}

const char* EtatRobot::UndefinedMethodException::what() const throw()
{
    return msg.c_str();
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::avancer() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::tourner() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::saisir() {
    throw UndefinedMethodException("Saisir");
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::poser() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::peser() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::rencontrerPlot() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::evaluerPlot() {
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::figer() {
    throw UndefinedMethodException("Figer");
    return nullptr;
}

/**
 * @return EtatRobot
 */
EtatRobot* EtatRobot::repartir() {
    throw UndefinedMethodException("Repartir");
    return nullptr;
}
