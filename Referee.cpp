#include <iostream>
#include "Referee.h"

    Player* Referee::refGame(Player*player1, Player*player2){  
        
        char player1move = player1->makeMove();
        char player2move = player2->makeMove();

        if(player1move == 'R' && player2move == 'S'){
            return player1;
        }
        else if(player1move == 'R' && player2move == 'P'){
            return player2;
        }
        else if(player1move == 'S' && player2move == 'R'){
            return player2;
        }
        else if(player1move == 'P' && player2move == 'R'){
            return player1;
        }
        else{
            return nullptr;
        }
  
     }
              
