//
// Created by wmull on 12/8/2025.
//

#include "Player.h"
#include <iostream>

Player::Player(const std::string& name, char symbol)
{
    m_name = name;
    m_symbol = symbol;
}

char Player::getSymbol() const
{
    return m_symbol;
}

std::string Player::getName() const
{
    return m_name;
}

void Player::getMove(int& r) const
{
    std::cout << m_name << " enter a position (1-9): ";
    std::cin >> r;
}
