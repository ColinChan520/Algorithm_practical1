#include "Human.h"
        
        char Human::makeMove(){
            cout << "Enter move:" << endl;
            char move;
            cin >> move;
            return move;
        }
        
        string Human::setName(string name){
            Human::nameOfHuman = name;
            return name;
        }

        string Human::getName(){
            return Human::nameOfHuman;
        }
