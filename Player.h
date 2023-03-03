#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player{
    public:
        
        bool isTie = false;
        
        virtual string getName() = 0;
        virtual char getMove() = 0;
};

#endif