bool checkForWinners()
{
    //check vertical rows
    for (int i = 0; i < 3; i++)
    {
        if (grid[2][i+2] && grid[2][i+2] == grid[3][i+2] && grid[3][i+2] == grid[4][i+2])
            return true;
    }
    //check orizontal rows
    for (int i = 0; i < 3; i++)
    {
        if (grid[i+2][2] && grid[i+2][2] == grid[i+2][3] && grid[i+2][3] == grid[i+2][4])
            return true;
    }
    return false;
    //cechk diagonal
}