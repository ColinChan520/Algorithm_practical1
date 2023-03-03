#include <iostream>
#include "Referee.h"

    Player* Referee::refGame(Player*player1, Player*player2){
        if (player1->getMove() == 'S'){
            return player2;
        }
        else if (player1->getMove() == 'P'){
            return player1;
        }
        else {
            player1->isTie = true;
            return player1;
        }
     }
              
