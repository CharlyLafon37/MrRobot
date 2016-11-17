/**
 * Project Untitled
 */


#ifndef _ETATROBOT_H
#define _ETATROBOT_H

class EtatRobot {
public: 
    
    EtatRobot avancer();
    
    EtatRobot tourner();
    
    EtatRobot saisir();
    
    EtatRobot poser();
    
    EtatRobot peser();
    
    EtatRobot rencontrerPlot();
    
    EtatRobot evaluerPlot();
    
    EtatRobot figer();
    
    EtatRobot repartir();
    
    EtatRobot afficher();
    
    static EtatRobot instance();
protected: 
    
    void EtatRobot();
private: 
    static EtatRobot instanceUnique;
};

#endif //_ETATROBOT_H