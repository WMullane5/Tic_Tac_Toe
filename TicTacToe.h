//
// Created by wmull on 12/8/2025.
//

#ifndef TIC_TAC_TOE_TICTACTOE_H
#define TIC_TAC_TOE_TICTACTOE_H
#include "Board.h"
#include "Game.h"
#include "Player.h"


class TicTacToe : public Game
{
private:
    Board m_board;
    Player m_player1;
    Player m_player2;

public:
    TicTacToe(const Player& p1, const Player& p2);

    void displayRules() override;
    void run() override;

    int operator++() override;

};


#endif //TIC_TAC_TOE_TICTACTOE_H