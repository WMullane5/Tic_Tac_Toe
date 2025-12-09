//
// Created by wmull on 12/7/2025.
//

#include "Board.h"

#include <cstdio>
#include <iostream>

void Board::clearBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m_board[i][j] = 'e';
        }
    }
}

void Board::printBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout <<"| " <<m_board[i][j] << " | ";
        }
        std::cout << std::endl;

    }
}
bool Board::isValidMove(int row, int column) {

    if (m_board[row][column] == 'e'){return true;}
    else {return false;}
}

bool Board::isFull() {
    int numspaces = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m_board[i][j] == 'e') {numspaces++;}
        }
    }
    if (numspaces == 9) {return true;}
    else {return false;}
}

void Board::makeMove(int row, int column, char choice) {
    m_board[row][column] = choice;
}
