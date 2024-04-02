#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct Ball {
    int x; // x-coordinate of the ball
    int y; // y-coordinate of the ball
    int radius; // radius of the ball
    int dx; // velocity along the x-axis
    int dy; // velocity along the y-axis
    u16 color; // color of the ball (GBA color format)
} ;
#endif
