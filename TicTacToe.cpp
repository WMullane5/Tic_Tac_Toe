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

    Player* current = &m_player1;
    Player* other = &m_player2;
    bool gameOver = false;
    while (!gameOver) {
        char playagain;
        cout << "Board: \n";
        m_board.printBoard();

        int choice;
        cout << current->getName() << "'s turn (" << current->getSymbol() << ")" << endl;
        current->getMove(choice);

        int row = (choice - 1)/3;
        int col = (choice - 1)%3;
        if (!m_board.isValidMove (row, col)) {
            cout << "Spot Taken. Try Again " << endl;
            continue;
        }
        m_board.makeMove(row, col, current->getSymbol());
        char winner = m_board.getWinner(current->getSymbol());
        if (winner != ' ') {
            cout << "Game Over" << endl;
            cout << "Final Board:" << endl;
            m_board.printBoard();
            cout << current->getName() << " wins! (" << winner << ")" << endl;
            ++(*this);
            cout <<"Total games played: " << m_score << endl;
            cout<<"\nPlay Again? (y/n)";
            cin >> playagain;
            if (playagain == 'n') {
                gameOver = true;
            }
            else if (playagain == 'y') {
                m_board.clearBoard();
            }

        }
        else if (m_board.isFull() == true) {
            cout << "Game Over" << endl;
            cout << "Final Board:" << endl;
            m_board.printBoard();
            ++(*this);
            cout << "It's A Tie! " << endl;
            cout << "Total games played: " << m_score << endl;
            cout<<"\nPlay Again? (y/n)";
            cin >> playagain;
            if (playagain == 'n') {
                gameOver = true;
            }
            else if (playagain == 'y') {
                m_board.clearBoard();
            }
        }
        else {
            swap(current, other);
        }
    }

}