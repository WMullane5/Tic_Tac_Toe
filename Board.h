//
// Created by wmull on 12/7/2025.
//

#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include <vector>

class Board {
private:
    // declare member variables
    std::vector<char> m_board;
    public:
    // constructor for board
    Board() {
        m_board = {
            {'e','e','e',},
            {'e','e','e'},
            {'e','e','e'}
        };
    }
};


#endif //TIC_TAC_TOE_BOARD_H