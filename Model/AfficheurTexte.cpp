/**
 * Project Untitled
 */


#include "AfficheurTexte.h"

/**
 * AfiicheurTexte implementation
 */

void AfficheurTexte::afficher(Robot& robot) const
{
    std::cout << "Etat actuel : " << robot.getEtat() << std::endl;
    std::cout << "Position : (" << robot.getPosition().getx() << ", " << robot.getPosition().gety() << ")" << std::endl;
    std::cout << "Direction : " << robot.getDirection() << std::endl;
}
