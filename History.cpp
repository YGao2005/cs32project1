//
// Created by Yang Gao on 1/14/24.
//
#include "History.h"
#include "City.h"
#include "iostream"

using namespace std;

History::History(int nRows, int nCols) {
    m_history = new City(nRows, nCols);
}

History::~History() {
    delete m_history;
}

bool History::record(int r, int c) {
    if(r >= 1  &&  r <= m_history->rows()  &&  c >= 1  &&  c <= m_history->cols()){
        if(m_records[r][c] == '\0'){
            m_records[r][c] = 'A';
        }
        else{
            m_records[r][c]++;
        }
        return true;
    }
    else{
        return false;
    }
}

void History::display() const {
    clearScreen();
    for (int r = 0; r < m_history->rows(); r++) {
        for (int c = 0; c < m_history->cols(); c++) {
            if (m_records[r][c] == '\0') {
                cout << '.';
            } else {
                cout << m_records[r][c];
            }
        }
    }
    cout << endl;
}



