void displayGrid(){
    cout <<"  now playing: player "<<currentPlayer<<"\n\n";
    for(int i=0;i<3;i++){
        cout <<"    ";
        for(int j=0;j<3;j++){
            if(grid[i+2][j+2]==1)
            cout <<"X";
            else if(grid[i+2][j+2]==-1)cout <<"O";
            else cout<<" ";
            if(j<2)cout <<" | ";
        }
        cout <<"\n";
        if(i<2)cout<<"    ---------\n";
    }
    cout <<"\n";
}