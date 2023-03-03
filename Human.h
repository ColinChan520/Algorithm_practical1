#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Player.h"

class Human : public Player{
    public:
        std::string nameOfHuman = "Human";
        
        char makeMove();
        
        std::string setName(string name);
        std::string getName();

};

#endif