cmake_minimum_required(VERSION 4.0)
project(Tic_Tac_Toe)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tic_Tac_Toe main.cpp
        Board.cpp
        Board.h
        TicTacToe.cpp
        TicTacToe.h
        Player.cpp
        Player.h
        Game.cpp
        Game.h)
