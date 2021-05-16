void displayGrid(){
    cout <<"  now playing: player "<<currentPlayer+1<<"\n\n";
    for(int i=0;i<3;i++){
        cout <<"    ";
        for(int j=0;j<3;j++){
            if(grid[i][j]==1)
            cout <<"O";
            else if(grid[i][j]==2)cout <<"X";
            else cout<<" ";
            if(j<2)cout <<" | ";
        }
        cout <<"\n";
        if(i<2)cout<<"    ---------\n";
    }
    cout <<"\n";
}