/**
 * Project Untitled
 */


#ifndef _ETATROBOT_H
#define _ETATROBOT_H

#include <iostream>

class EtatRobot {
public:
    
    class UndefinedMethodException : public std::exception
    {
    private:
        std::string msg;
    public:
        UndefinedMethodException(std::string errorMessage);
        const char* what() const throw ();
        virtual ~UndefinedMethodException() throw() {}
    };
    
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
    
    EtatRobot* etatPrecedent;
};

#endif //_ETATROBOT_H
