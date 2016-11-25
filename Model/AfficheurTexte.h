/**
 * Project Untitled
 */


#ifndef _AFFICHEURTEXTE_H
#define _AFFICHEURTEXTE_H

#include <iostream>
#include "Afficheur.h"

class AfficheurTexte : public Afficheur{
public: 
    
    virtual void afficher(Robot& robot) const;
    
private:
   
};

#endif //_AFFICHEURTEXTE_H
