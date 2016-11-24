/**
 * Project Untitled
 */


#include "Robot.h"

/**
 * Robot implementation
 */

void Robot::Robot() : position(0,0), direction("N")
{
    plot = nullptr;
    objet = nullptr;
    etat = EtatRobot.instance();
}

/**
 * @param x
 * @param y
 * @return void
 */
void Robot::avancer(int x, int y) {
    try{
        etat = *(etat.avancer());
        position.setx(x);
        position.sety(y);
    }
    catch(){
        std::cout << "Pas possible d'avancer" << std::endl;
    }
}

/**
 * @param direction
 * @return void
 */
void Robot::tourner(String direction) {
    try{
        etat = *(etat.tourner());
        this->direction = direction;
    }
    catch(){
        std::cout << "Pas possible de tourner" << std::endl;
    }
}

/**
 * @param o
 * @return void
 */
void Robot::saisir(Objet o) {
    try{
        etat = *(etat.saisir());
        objet = o;
    }
    catch(){
        std::cout << "Pas possible de saisir" << std::endl;
    }
}

/**
 * @return void
 */
void Robot::poser() {
    try{
        etat = *(etat.poser());
        objet = NULL;
    }
    catch(){
        std::cout << "Pas possible de poser" << std::endl;
    }
}

/**
 * @return int
 */
int Robot::peser() {
    try{
        etat = *(etat.peser());
    }
    catch(){
        std::cout << "Pas possible de peser" << std::endl;
    }
    
    return objet.getPoids();
}

/**
 * @param p
 * @return void
 */
void Robot::rencontrerPlot(Plot p) {
    try{
        etat = *(etat.rencontrerPlot());
        plot = p;
    }
    catch(){
        std::cout << "Pas possible de rencontrer un plot" << std::endl;
    }
}

/**
 * @return int
 */
int Robot::evaluerPlot() {
    try{
        etat = *(etat.evaluerPlot());
    }
    catch(){
        std::cout << "Pas possible d'évaluer un plot" << std::endl;
    }
    
    return plot.getHauteur();
}

/**
 * @return void
 */
void Robot::figer() {
    try{
        etat = *(etat.figer());
    }
    catch(){
        std::cout << "Pas possible de figer" << std::endl;
    }
}

/**
 * @return void
 */
void Robot::repartir() {
    try{
        etat = *(etat.repartir());
    }
    catch(){
        std::cout << "Pas possible de repartir" << std::endl;
    }
}

/**
 * @return void
 */
void Robot::afficher() {
    return;
}
