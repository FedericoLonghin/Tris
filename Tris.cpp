#include <iostream>
using namespace std;
#include "settings.cpp"
#include "display.cpp"
#include "GettingKeys.cpp"
#include "checkingThings.cpp"
#include "takingDecisions.cpp"



int main(int argc, char *argv[])
{
    system("clear");
    cout << "TRIS GAME\n\n type [0] for singleplayer, [1] for multiplayer, any other NUMBER for exit: ";
    cin >> gameMode;
    if (gameMode > 1)
        return 0;

    system("clear");
            displayGrid();
    do
    {

        switch (gameMode)
        {

        case 0: //singleplayer
            getKeyboardData();
            system("clear");
            displayGrid();
            break;

        case 1: //multiplayer

            getKeyboardData();  
            system("clear");
            displayGrid();
            cout << "danger: "<<getDanger(1,1)<<"\n";
            break;
        }
        somebodyHasWon = checkForWinners();
    }
        while (!somebodyHasWon&&nMove<9)
            ;
       if(somebodyHasWon) cout <<"Somebody won the game, you already know who\n";
        else cout << "Nobody has won, relaunch the program for defining who is the best\n";
        return 0;
}