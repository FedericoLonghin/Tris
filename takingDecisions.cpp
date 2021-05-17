//get the point of the matrix[2-4][2-4] and return the danger of the cell.
int getDanger(int _x, int _y)
{
    if (grid[_x][_y] != 0)
        return 0;

    int dang = 0, temp = 0;
    //check vert
    temp = grid[_x - 2][_y] + grid[_x - 1][_y] + grid[_x + 1][_y] + grid[_x + 2][_y];
    dang += temp * temp;
    temp = grid[_x][_y - 2] + grid[_x][_y - 1] + grid[_x][_y + 1] + grid[_x][_y + 2];
    dang += temp * temp;

    if ((_x + _y) == 6)
    {
        temp = grid[_x - 2][_y + 2] + grid[_x - 1][_y + 1] + grid[_x + 1][_y - 1] + grid[_x + 2][_y - 2];
        dang += temp * temp;
    }
    if (_x == _y && _x == 2)
        temp = grid[3][3] + grid[4][4];
    else if (_x == _y && _x == 3)
        temp = grid[2][2] + grid[4][4];
    else if (_x == _y && _x == 4)
        temp = grid[2][2] + grid[3][3];


    dang += temp * temp;

    return dang;
}

int findCell()
{
   
    int temp = 0;

    for (int i = 0; i < 9; i++)
    {
        if (importanceGrid[2 + (i / 3)][2 + (i % 3)] > importanceGrid[2 + (temp / 3)][2 + (temp % 3)])
            temp = i;
    }
    return temp;

}
void calcDanger()
{
    //calcolating tha danger for each cell
    for (int i = 0; i < 9; i++)
    {
        importanceGrid[2 + (i / 3)][2 + (i % 3)] = getDanger(2 + (i / 3), 2 + (i % 3));
    }
}

void makeDecision()
{
    calcDanger();
    for (int i = 0; i < 9; i++)
    {
    }
    //finding the most dangerous cell
    //  cout << "most dangerous: " << temp << "\n";
    int cont = 9, tempCel = 0;
    do
    {

        tempCel = findCell();
        //assigning the value to the cell
        if (grid[2 + (tempCel / 3)][2 + (tempCel % 3)] == 0)
            grid[2 + (tempCel / 3)][2 + (tempCel % 3)] = -1;
        else
        {
            importanceGrid[2 + (tempCel / 3)][2 + (tempCel % 3)] = -1;
            cont--;
        }
    } while (grid[2 + (tempCel / 3)][2 + (tempCel % 3)] == 0);

currentPlayer=-1*currentPlayer;
}
