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
    {
        while (true)
        {
            std::cout << m_name << " enter a position (1-9): ";
            std::cin >> r;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Invalid input. Please enter a number between 1 and 9." << std::endl;
                continue;
            }

            if (r < 1 || r > 9)
            {
                std::cout << "Number out of range. Please enter a number between 1 and 9." << std::endl;
                continue;
            }

            std::cin.ignore(1000, '\n');
            break;
        }
    }
}