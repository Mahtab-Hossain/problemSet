#include <iostream>
#include <cmath>

using namespace std;
void matrix(){
    int i,j, number = 0;
    for(i=1; i<=5; i++)
    {
        for(j=1;j<=5; j++){
            cin>>number;
            if(number==1){
                cout<<abs(i-3)+abs(j-3)<<endl;
            }
        }
    }
}

int main(){
    matrix();
    return 0;
}