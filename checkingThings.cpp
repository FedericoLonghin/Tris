bool checkForWinners()
{
    //check vertical rows
    for (int i = 0; i < 3; i++)
    {
        if (grid[0][i] and grid[0][i] == grid[1][i] and grid[1][i] == grid[2][i])
            return true;
    }
    //check orizontal rows
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][0] and grid[i][0] == grid[i][1] and grid[i][1] == grid[i][2])
            return true;
    }
    return false;
    //cechk diagonal
}