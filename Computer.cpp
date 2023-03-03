#include "Computer.h"
#include <string>

        char Computer::makeMove(){
            Computer::moveChoice = 'R';
            cout << 'computer move' << endl;
            return Computer::moveChoice;
        }

        char Computer::getMove(){
            return Computer::moveChoice;
        }

        string  Computer::getName(){
            return Computer::nameOfComputer;
        }
