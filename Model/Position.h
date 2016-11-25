/**
 * Project Untitled
 */


#ifndef _POSITION_H
#define _POSITION_H

class Position {
public: 
    
    Position(int newX, int newY);
    
    /**
     * @param x
     */
    void setx(int newX);
    
    /**
     * @param y
     */
    void sety(int newY);
    
    int getx();
    
    int gety();
private: 
    int x;
    int y;
};

#endif //_POSITION_H
