/**
 * Project Untitled
 */

#include <iostream>
#include "Robot.h"
#include "AfficheurTexte.h"

int main()
{
    Robot robot;
    AfficheurTexte afficheur;
    robot.attacherVue(afficheur);

    robot.afficher();
    
    Objet objet;
    std::cout << std::endl << "Appel de saisir()" << std::endl;
    robot.saisir(objet);
    
    std::cout << std::endl << "Appel de figer()" << std::endl;
    robot.figer();
    
    std::cout << std::endl << "Appel de repartir()" << std::endl;
    robot.repartir();
    
    return 0;
}
