#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int row,col,hits,numberOfTurns;
    bool ship[3][3]={
        {0,1,1},
        {1,0,1},
        {0,0,1}

    };
    while (hits<3)
    {
        cout<<"Selecting coordinates:"<<endl;
        cout<<"choose a row number between 0 and 2";
        cin>>row;
        cout<<"choose a column number between 0 and 2";
        cin>>col;

    if (ship[row][col])
    {
        ship[row][col]=0;
        hits++;
        cout<<"hit!!!"<<(3-hits)<<" left.\n\n";
    }
    else{ 
        cout<<"MISS\n\n";
    }
    numberOfTurns++;

    }
    cout<<"victory: \n";
    cout<<"you won in "<<numberOfTurns<<"turns";


}