void getKeyboardData()
{
    int _x, _y;
    cout << "insert the colum: ";
    cin >> _y;
    cout << "insert the row: ";
    cin >> _x;
    if (_x > 0 && _x < 4 && _y > 0 && _y < 4 && grid[_x + 1][_y + 1] == 0)
    {
        grid[_x + 1][_y + 1] = currentPlayer;

            currentPlayer = -1 * currentPlayer;
       
    }
    else
        cout << "ERROR: your value isn't in the playable range!\n";
}
