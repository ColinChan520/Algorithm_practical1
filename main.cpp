#include "Referee.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

int main(){
    for( ; ; ){
        
        char inputMove;
        
        cout << "Enter move: " << endl;
        cin >> inputMove;
        if (inputMove != 'R' && inputMove != 'S' && inputMove != 'P'){
                break;
            }

        Human h;
        Computer c;
        c.makeMove();
        h.makeMove(inputMove);
        Referee r;

        Player*winner = r.refGame(&h, &c);
        if (winner->isTie == true){
            cout << "Tie" << endl;
            }

        else{
            cout << winner->getName() << endl;
            } 
    }
    return 0;
}
