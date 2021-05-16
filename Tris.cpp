#include <iostream>
using namespace std;
#include "settings.cpp"
#include "display.cpp"
#include "GettingKeys.cpp"
#include "checkingThings.cpp"

int main(int argc, char *argv[])
{
            system("clear");
        displayGrid();
    do
    {
        getKeyboardData();
        system("clear");
        displayGrid();
        somebodyHasWon=checkForWinners();
    } while (!somebodyHasWon);
cout <<"Somebody won the game, you already know who\n";
    return 0;
}