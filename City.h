//
// Created by Yang Gao on 1/10/24.
//

#ifndef INC_32PROJ1_CITY_H
#define INC_32PROJ1_CITY_H

#include "globals.h"
#include "Player.h"
#include "Tooter.h"
//#include "History.h"

class History;

class City
{
public:
    // Constructor/destructor
    City(int nRows, int nCols);
    ~City();

    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    History& history();
    bool    isPlayerAt(int r, int c) const;
    int     tooterCount() const;
    int     nTootersAt(int r, int c) const;
    bool    determineNewPosition(int& r, int& c, int dir) const;
    void    display() const;

    // Mutators
    bool addTooter(int r, int c);
    bool addPlayer(int r, int c);
    void preachToTootersAroundPlayer();
    void moveTooters();

private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Tooter* m_tooters[MAXTOOTERS];
    int     m_nTooters;
    History m_history;

    // Helper functions
    bool isInBounds(int r, int c) const;
};

#endif //INC_32PROJ1_CITY_H