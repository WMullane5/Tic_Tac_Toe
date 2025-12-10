//
// Created by wmull on 12/7/2025.
//

#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include <vector>

class Board {
private:
    // declare member variables
    std::vector<std::vector<char>> m_board;
    public:
    // constructor for board
    Board() {
        // e stands for empty space
        m_board =  {
            {'e','e','e',},
            {'e','e','e'},
            {'e','e','e'}
        };
    }
    void printBoard();
    bool isValidMove(int row, int column);
    void makeMove(int row, int column, char choice);
    bool isFull();
    void clearBoard();
    char getWinner(char symbol);
};


#endif //TIC_TAC_TOE_BOARD_H