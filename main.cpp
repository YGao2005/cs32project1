// toot.cpp

#include <iostream>
#include <string>
#include <cstdlib>

// toot.cpp

#include <iostream>
#include <string>
#include <cstdlib>

#include "Game.h"
#include "City.h"
#include "City.h"
#include "Player.h"
#include "Player.h"
#include "Tooter.h"
#include "Tooter.h"
#include "globals.h"
#include "globals.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////
//  Auxiliary function implementations
///////////////////////////////////////////////////////////////////////////

int decodeDirection(char dir)
{
    switch (dir)
    {
        case 'u':  return UP;
        case 'd':  return DOWN;
        case 'l':  return LEFT;
        case 'r':  return RIGHT;
    }
    return -1;  // bad argument passed in!
}

///////////////////////////////////////////////////////////////////////////
//  main()
///////////////////////////////////////////////////////////////////////////

int main()
{
    // Create a game
    // Use this instead to create a mini-game:   Game g(3, 4, 2);
    Game g(7, 8, 25);

    // Play the game
    g.play();
}
