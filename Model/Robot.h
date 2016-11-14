/**
 * Project Untitled
 */


#ifndef _ROBOT_H
#define _ROBOT_H

class Robot {
public: 
    EtatRobot etat;
    
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
private: 
    String direction;
    Position position;
    Objet objet;
};

#endif //_ROBOT_H