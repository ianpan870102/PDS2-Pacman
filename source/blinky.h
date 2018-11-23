#ifndef BLINKY_H
#define BLINKY_H
#include "enemy.h"
#include "pacman.h"

class Blinky : public Enemy{
public:
    Blinky(int x, int y);
    virtual void set_goal(int &goal_x, int &goal_y, int pac_x, int pac_y,int dir_x, int dir_y);
};
#endif