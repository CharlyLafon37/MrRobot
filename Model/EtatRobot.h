/**
 * Project Untitled
 */


#ifndef _ETATROBOT_H
#define _ETATROBOT_H

class EtatRobot {
public: 
    
    virtual EtatRobot avancer();
    
    virtual EtatRobot tourner();
    
    virtual EtatRobot saisir();
    
    virtual EtatRobot poser();
    
    virtual EtatRobot peser();
    
    virtual EtatRobot rencontrerPlot();
    
    virtual EtatRobot evaluerPlot();
    
    virtual EtatRobot figer();
    
    virtual EtatRobot repartir();
    
    virtual EtatRobot afficher();
    
    static EtatRobot instance();
protected: 
    
    void EtatRobot();
private: 
    static EtatRobot instanceUnique;
};

#endif //_ETATROBOT_H
