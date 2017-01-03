/**
 * Project Untitled
 */


#ifndef _LECTEURFICHIER_H
#define _LECTEURFICHIER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "Commande.h"
#include "Objet.h"
#include "Plot.h"

using namespace std;

class Commande;

class LecteurFichier {
public:
    LecteurFichier();
    void lireFichier(string pathToFile);
    
    int x, y;
    string direction;
    Objet objet;
    Plot plot;
    
private: 
    Commande* commande;
};

#endif //_PLOT_H
