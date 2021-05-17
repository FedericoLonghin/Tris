bool checkForWinners()
{
    //check vertical rows
    for (int i = 0; i < 3; i++)
    {
        if (grid[0][i] && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i])
            return true;
    }
    //check orizontal rows
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][0] && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2])
            return true;
    }
    return false;
    //cechk diagonal
}