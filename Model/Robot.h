/**
 * Project Untitled
 */


#ifndef _ROBOT_H
#define _ROBOT_H

#include <iostream>
#include <vector>
#include "Plot.h"
#include "Position.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "AVideFacePlot.h"
#include "Afficheur.h"

class Afficheur;

class Robot {
public: 
    
    /**
     * @param x
     * @param y
     */
    void avancer(int x, int y);
    
    /**
     * @param direction
     */
    void tourner(std::string direction);
    
    /**
     * @param o
     */
    void saisir(Objet& o);
    
    void poser();
    
    int peser();
    
    /**
     * @param p
     */
    void rencontrerPlot(Plot& p);
    
    int evaluerPlot();
    
    void figer();
    
    void repartir();
    
    // Also known as "notify()"
    void afficher();
    
    void attacherVue(Afficheur& vue);
    void detacherVue(Afficheur& vue);
    
    std::string getEtat();
    Position getPosition();
    std::string getDirection();
    
    Robot();
private:
    
    std::string direction;
    Plot* plot;
    Position position;
    Objet* objet;
    EtatRobot* etat;
    std::vector<Afficheur*> afficheurs;
    
};

#endif //_ROBOT_H
