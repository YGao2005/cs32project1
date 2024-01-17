//
// Created by Yang Gao on 1/10/24.
//

#ifndef INC_32PROJ1_PLAYER_H
#define INC_32PROJ1_PLAYER_H

class City; //Unsure usage

class Player
{
public:
    // Constructor
    Player(City *cp, int r, int c);

    // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    int  health() const;
    bool isPassedOut() const;

    // Mutators
    void  preach();
    void  move(int dir);
    void  getGassed();

private:
    City* m_city;
    int   m_row;
    int   m_col;
    int   m_health;
    int   m_age;
};


#endif //INC_32PROJ1_PLAYER_H