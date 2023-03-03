#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "Player.h"
#include <iostream>

class Computer : public Player{
    public:
        char moveChoice;
        std::string nameOfComputer = "Computer";

        char makeMove();
        char getMove();

        std::string getName();

        bool isTie = false;
};

#endif
