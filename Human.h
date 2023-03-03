#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Player.h"

class Human : public Player{
    public:
        char moveChoice;
        std::string nameOfHuman = "Human";
        
        char makeMove(char move);
        char getMove();
        
        std::string setName(string name);
        std::string getName();

        bool isTie = false;

};

#endif