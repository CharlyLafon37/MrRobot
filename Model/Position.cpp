/**
 * Project Untitled
 */


#include "Position.h"

/**
 * Position implementation
 */

Position::Position(int newX, int newY) : x(newX), y(newY)
{
    
}

/**
 * @param x
 * @return void
 */
void Position::setx(int newX) {
    x = newX;
}

/**
 * @param y
 * @return void
 */
void Position::sety(int newY) {
    y = newY;
}

/**
 * @return int
 */
int Position::getx() {
    return 0;
}

/**
 * @return int
 */
int Position::gety() {
    return 0;
}
