//
// Created by Yang Gao on 1/10/24.
//

#ifndef INC_32PROJ1_GLOBAL_H
#define INC_32PROJ1_GLOBAL_H

///////////////////////////////////////////////////////////////////////////
//  Auxiliary function declarations
///////////////////////////////////////////////////////////////////////////


int decodeDirection(char dir);
int randInt(int min, int max);
void clearScreen();


///////////////////////////////////////////////////////////////////////////
// Manifest constants
///////////////////////////////////////////////////////////////////////////

const int MAXROWS = 20;               // max number of rows in a city
const int MAXCOLS = 30;               // max number of columns in a city
const int MAXTOOTERS = 125;           // max number of Tooters allowed
const int INITIAL_PLAYER_HEALTH = 12;

const int UP      = 0;
const int DOWN    = 1;
const int LEFT    = 2;
const int RIGHT   = 3;
const int NUMDIRS = 4;

#endif //INC_32PROJ1_GLOBAL_H