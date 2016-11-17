/**
 * Project Untitled
 */


#ifndef _ROBOT_H
#define _ROBOT_H

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
    void tourner(String direction);
    
    /**
     * @param o
     */
    void saisir(Objet o);
    
    void poser();
    
    int peser();
    
    /**
     * @param p
     */
    void rencontrerPlot(Plot p);
    
    int evaluerPlot();
    
    void figer();
    
    void repartir();
    
    void afficher();
    
    void Robot();
private: 
    String direction;
    Position position;
    Objet objet;
    EtatRobot etat;
};

#endif //_ROBOT_H