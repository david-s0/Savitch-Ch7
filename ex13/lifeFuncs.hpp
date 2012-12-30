#ifndef LIFE_FUNCS_HPP

#define LIFE_FUNCS_HPP

//wrapper functions that perform all the operations, representing the passage of another cycle
void newCycle(bool world[80][22]);

//print world
void printWorld(bool world[80][22]);

//circle of life
void circleOfLife(bool world[80][22]);

//calc neighbours
int neighbours(bool world[80][22], int x, int y);

#endif
