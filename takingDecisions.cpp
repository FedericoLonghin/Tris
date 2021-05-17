//get the point of the matrix[2-4][2-4] and return the danger of the cell.
int getDanger(int _x, int _y)
{
    int dang = 0, temp = 0;
    //check vert
    temp = grid[_x - 2][_y] + grid[_x - 1][_y] + grid[_x + 1][_y] + grid[_x + 2][_y];
    dang += temp * temp;
    temp = grid[_x][_y - 2] + grid[_x][_y - 1] + grid[_x][_y + 1] + grid[_x][_y + 2];
    dang += temp * temp;
    return dang;
}

void makeDecision()
{
    //calcolating tha danger for each cell
    for (int i = 0; i < 9; i++)
    {
        importanceGrid[2 + (i / 3)][2 + (i % 3)] = getDanger(2 + (i / 3), 2 + (i % 3));
    }

    //finding the most dangerous cell
    int temp,start=0;
    recalc:
    temp=start;
    for (int i = 0; i < 9; i++)
    {
        if (importanceGrid[2 + (i / 3)][2 + (i % 3)] > importanceGrid[2 + (temp / 3)][2 + (temp % 3)])
   temp=i;
    }
   cout <<"most dangerous: "<<temp <<"\n";
    //assigning the value to the cell
    if( grid[2+(temp/3)][2+(temp%3)]==0)
    grid[2+(temp/3)][2+(temp%3)]=-1;
    else{
        start++;
        goto recalc;
    }
    //currentPlayer=-1*currentPlayer;
}