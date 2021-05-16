#include <iostream>
using namespace std;
#include "settings.cpp"
#include "display.cpp"
#include "GettingKeys.cpp"

int main(int argc, char *argv[])
{
            system("clear");
        displayGrid();
    do
    {
        getKeyboardData();
        system("clear");
        displayGrid();
    } while (!somebodyHasWon);

    return 0;
}