#include <iostream>
#include "Referee.h"

    Player* Referee::refGame(Player*player1, Player*player2){
        cout << player1->getMove() << endl;
        cout << player2->getMove() << endl;
        cout << player1->getName() << endl;
        cout << player2->getName() << endl;

        if (player1->getMove() == 'S'){
            return player2;
        }
        else if (player1->getMove() == 'P'){
            return player1;
        }
        else {
            return nullptr;
        }
     }
              
