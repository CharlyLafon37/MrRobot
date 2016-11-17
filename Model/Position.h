/**
 * Project Untitled
 */


#ifndef _POSITION_H
#define _POSITION_H

class Position {
public: 
    
    /**
     * @param x
     */
    void setx(int x);
    
    /**
     * @param y
     */
    void sety(int y);
    
    int getx();
    
    int gety();
private: 
    int x;
    int y;
};

#endif //_POSITION_H