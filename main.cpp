#include "TicTacToe.h"
#include "Player.h"
#include <iostream>
#include <string>

int main() {
    std::string name1, name2;
    std::cout << "Enter Player 1 name: ";
    std::cin >> name1;
    std::cout << "Enter Player 2 name: ";
    std::cin >> name2;

    Player p1(name1, 'X');
    Player p2(name2, 'O');

    printPlayerInfo(p1);
    printPlayerInfo(p2);

    TicTacToe game(p1, p2);
    game.run();

    return 0;
}

