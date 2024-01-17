//
// Created by Yang Gao on 1/14/24.
//

#ifndef INC_32PROJ1_HISTORY_H
#define INC_32PROJ1_HISTORY_H
#include "globals.h"

class City;

class History
{
public:
    History(int nRows, int nCols);
    ~History();
    bool record(int r, int c);
    void display() const;
private:
    City* m_history;
    char m_records[MAXROWS][MAXCOLS]{};
};

#endif //INC_32PROJ1_HISTORY_H
