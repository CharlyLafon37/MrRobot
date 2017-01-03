/**
 * Project Untitled
 */


#ifndef _ROBOT_H
#define _ROBOT_H

#include <iostream>
#include <vector>
#include "Plot.h"
#include "Objet.h"

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
    
    Robot();
    
    Objet* objet;
    Plot* plot;
    int x, y;
    std::string direction;
};

#endif //_ROBOT_H
