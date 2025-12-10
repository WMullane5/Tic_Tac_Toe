//
// Created by wmull on 12/8/2025.
//
#include "TicTacToe.h"

#include <iostream>
using namespace std;

TicTacToe::TicTacToe(const Player& p1, const Player& p2)
    : m_player1(p1), m_player2(p2)
{
    m_score = 0;
}
void TicTacToe::displayRules() {
    cout << "***********RULES**********" << endl;
    cout << "Enter a number (1-9) to place your mark:" << endl;
    cout << " 1 | 2 | 3 " << endl;
    cout << " 4 | 5 | 6 " << endl;
    cout << " 7 | 8 | 9 " << endl;
    cout << "***************************" << endl;
}
int TicTacToe::operator++() {
    m_score++;
    return m_score;
}

void TicTacToe::run() {
    m_board.clearBoard();
    displayRules();

    Player current = m_player1;
    bool gameOver = false;
    while (!gameOver) {
        cout << "Board: ";
        m_board.printBoard();

        int choice;
        cout << current.getName() << "'s turn (" << current.getSymbol() << ")" << endl;
        current.getMove(choice);

        if (choice < 1 || choice > 9) {
            cout << "Invalid choice, Please choose a number between 1-9. " << endl;
            continue;

        }
        int row = (choice - 1)/3;
        int col = (choice - 1)%3;
        if (!m_board.isValidMove (row, col)) {
            cout << "Spot Takem. Try Again " << endl;
            continue;
        }
        m_board.makeMove(row, col, current.getSymbol());
        char winner = m_board.getWinner(current.getSymbol());
        if (winner != ' ') {
            cout << "\nFinal Board:" << endl;
            m_board.printBoard();
            cout << current.getName() << "wins! (" << winner << ")" << endl;
            ++(*this);
            gameOver = true;

        }
        else if (m_board.isFull() == true) {
            cout << "\nFinal Board:" << endl;
            m_board.printBoard();
            cout << "It's A Tie! " << endl;
            gameOver = true;
        }
        else {
            current = (current.getSymbol() == m_player1.getSymbol()) ? m_player1 : m_player2;

        }
    }
    cout << "\nTotal Score: " << m_score << endl;

}