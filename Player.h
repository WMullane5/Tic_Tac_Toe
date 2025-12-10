//
// Created by wmull on 12/8/2025.
//

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
private:
    std::string m_name;   //-m_name : string
    char m_symbol;        //-m_symbol : char

public:
    //+player(name: string, symbol: char)
    Player(const std::string& name, char symbol);

    //+getSymbol(): char
    char getSymbol() const;

    //+getName(): string
    std::string getName() const;

    //+getMove(r : int&) : void
    void getMove(int& r) const;

    //friend function
    friend void printPlayerInfo(const Player& p);
};

#endif
