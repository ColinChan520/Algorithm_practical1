#include "Human.h"
#include <string>
        
        char Human::makeMove(char move){
            Human::moveChoice = move;
            cout << 'human move:' << endl;
            cout << move << endl;
            return move;
        }

        char Human::getMove(){
            return Human::moveChoice;
        }
        
        string Human::setName(string name){
            Human::nameOfHuman = name;
            return name;
        }

        string Human::getName(){
            return Human::nameOfHuman;
        }
