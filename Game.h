//
// Created by wmull on 12/8/2025.
//

#ifndef GAME_H
#define GAME_H

class Game
{
protected:
    int m_score;   //# m_score : int

public:
    Game() : m_score(0) {}

    //+displayRules() = 0 : void
    virtual void displayRules() = 0;

    //+run() = 0 : void
    virtual void run() = 0;

    //+operator+() : void
    virtual void operator+() = 0;

    virtual ~Game() = default;
};

#endif