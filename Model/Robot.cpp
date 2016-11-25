/**
 * Project Untitled
 */


#include "Robot.h"

/**
 * Robot implementation
 */

Robot::Robot() : direction("N"), position(0,0), afficheurs()
{
    plot = nullptr;
    objet = nullptr;
    etat = AVide::instance();
}

/**
 * @param x
 * @param y
 * @return void
 */
void Robot::avancer(int x, int y) {
    try{
        etat = etat->avancer();
        position.setx(x);
        position.sety(y);
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    afficher();
}

/**
 * @param direction
 * @return void
 */
void Robot::tourner(std::string direction) {
    try{
        etat = etat->tourner();
        this->direction = direction;
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    afficher();
}

/**
 * @param o
 * @return void
 */
void Robot::saisir(Objet& o) {
    try{
        etat = etat->saisir();
        objet = &o;
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    afficher();
}

/**
 * @return void
 */
void Robot::poser() {
    try{
        etat = etat->poser();
        objet = NULL;
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    afficher();
}

/**
 * @return int
 */
int Robot::peser() {
    try{
        etat = etat->peser();
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    
    afficher();
    
    return objet->getPoids();
}

/**
 * @param p
 * @return void
 */
void Robot::rencontrerPlot(Plot& p) {
    try{
        etat = etat->rencontrerPlot();
        plot = &p;
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    
    afficher();
}

/**
 * @return int
 */
int Robot::evaluerPlot() {
    try{
        etat = etat->evaluerPlot();
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    
    afficher();
    
    return plot->getHauteur();
}

/**
 * @return void
 */
void Robot::figer() {
    try{
        etat = etat->figer();
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    
    afficher();
}

/**
 * @return void
 */
void Robot::repartir() {
    try{
        etat = etat->repartir();
    }
    catch(const EtatRobot::UndefinedMethodException& e){
        std::cout << e.what() << std::endl;
    }
    
    afficher();
}

void Robot::attacherVue(Afficheur& vue)
{
    afficheurs.push_back(&vue);
}

void Robot::detacherVue(Afficheur& vue)
{
    for(size_t i = 0; i < afficheurs.size(); i++)
    {
        if(afficheurs[i] == &vue)
        {
            afficheurs.erase(afficheurs.begin() + i);
            return;
        }
    }
}

std::string getEtat()
{
    
}

/**
 * @return void
 */
void Robot::afficher() {
    for(Afficheur* aff : afficheurs)
    {
        aff->afficher(*this);
    }
}
