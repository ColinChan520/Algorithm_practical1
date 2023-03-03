#include <iostream>
#include "Referee.h"

    Player* Referee::refGame(Player*player1, Player*player2){   
        cout << 'players:' << endl;
        cout << player1->getName() << endl;
        cout << player2->getName() << endl;
        cout << 'players:' << endl;
        cout << player1->getMove() << endl;
        cout << player2->getMove() << endl;

        if (player1->getMove() == 'S' && player2->getMove() == 'R'){
            return player2;
        }
        else if (player1->getMove() == 'R' && player2->getMove() == 'S'){
            return player1;
        }
        else if (player1->getMove() == 'P' && player2->getMove() == 'R'){
            return player1;
        }
        else if (player1->getMove() == 'R' && player2->getMove() == 'P'){
            return player2;
        }
        else {
            return nullptr;
        }
     }
              
