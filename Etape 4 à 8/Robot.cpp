/**
 * Project Untitled
 */


#include "Robot.h"

/**
 * Robot implementation
 */

Robot::Robot()
{
    objet = nullptr;
    plot = nullptr;
    x = 0;
    y = 0;
}

/**
 * @param x
 * @param y
 * @return void
 */
void Robot::avancer(int x, int y) {
    
    this->x = x;
    this->y = y;
    std::cout << "On avance en (" << x << ", " << y << ")" << std::endl;
}

/**
 * @param direction
 * @return void
 */
void Robot::tourner(std::string direction) {
    
    this->direction = direction;
    std::cout << "On change de direction vers " << direction << std::endl;
}

/**
 * @param o
 * @return void
 */
void Robot::saisir(Objet& o) {
    std::cout << "Saisie de l'objet" << std::endl;
    objet = &o;
}

/**
 * @return void
 */
void Robot::poser() {
    std::cout << "On pose l'objet" << std::endl;
}

/**
 * @return int
 */
int Robot::peser() {
    std::cout << "On pèse" << std::endl;
}

/**
 * @param p
 * @return void
 */
void Robot::rencontrerPlot(Plot& p) {
    std::cout << "Rencontre du plot" << std::endl;
    plot = &p;
}

/**
 * @return int
 */
int Robot::evaluerPlot() {
    std::cout << "Evaluation du plot" << std::endl;
}

/**
 * @return void
 */
void Robot::figer() {
    std::cout << "Appel de figer()" << std::endl;
}

/**
 * @return void
 */
void Robot::repartir() {
    std::cout << "Appel de repartir()" << std::endl;
}
