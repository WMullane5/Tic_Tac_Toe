//
// Created by wmull on 12/7/2025.
//

#include "Board.h"

#include <cstdio>
#include <iostream>

void Board::clearBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m_board[i][j] = ' ';
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

    if (m_board[row][column] == ' '){return true;}
    else {return false;}
}

bool Board::isFull() {
    int numspaces = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m_board[i][j] == ' ') {numspaces++;}
        }
    }
    std::cout<<numspaces<<std::endl;
    if (numspaces == 0) {return true;}
    else {return false;}
}

void Board::makeMove(int row, int column, char choice) {
    m_board[row][column] = choice;
}
char Board::getWinner(char symbol) {
    // check if x's win
    // check across rows
    for (int r = 0; r < 3; r++) {
        if (m_board[r][0] == symbol && m_board[r][1] == symbol && m_board[r][2] == symbol) {return symbol;}
    }
    // check columns
    for (int c = 0; c < 3; c++) {
        if (m_board[0][c] == symbol && m_board[1][c] == symbol && m_board[2][c] == symbol) {return symbol;}
    }
    // check diagonal top left to bottom right
    if (m_board[0][0] == symbol && m_board[1][1] == symbol && m_board[2][2] == symbol) {return symbol;}
    // check top right to bottom left
    if (m_board[0][2] == symbol && m_board[1][1] == symbol && m_board[2][0] == symbol) {return symbol;}
    else {return ' ';}
}
