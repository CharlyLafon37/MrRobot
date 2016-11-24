/**
 * Project Untitled
 */


#ifndef _ETATROBOT_H
#define _ETATROBOT_H

class EtatRobot {
public:
    
    class UndefinedMethodException() : public std::exception
    {
    public:
        const char* what() const throw () {return "Call to method not allowed.";}
    }
    
    virtual EtatRobot* avancer();
    
    virtual EtatRobot* tourner();
    
    virtual EtatRobot* saisir();
    
    virtual EtatRobot* poser();
    
    virtual EtatRobot* peser();
    
    virtual EtatRobot* rencontrerPlot();
    
    virtual EtatRobot* evaluerPlot();
    
    virtual EtatRobot* figer();
    
    virtual EtatRobot* repartir();
    
    virtual EtatRobot* afficher();
    
protected:
    
    EtatRobot& etatPrecedent;
};

#endif //_ETATROBOT_H
