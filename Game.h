//
// Created by Yang Gao on 1/10/24.
//


#ifndef INC_32PROJ1_GAME_H
#define INC_32PROJ1_GAME_H


class City;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nTooters);
    ~Game();

    // Mutators
    void play();

private:
    City* m_city;
};


#endif //INC_32PROJ1_GAME_H