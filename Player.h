#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player{
    public:
        
        virtual string getName() = 0;
        virtual char makeMove() = 0;

};

#endif