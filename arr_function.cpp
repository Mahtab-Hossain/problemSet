#include <iostream>
using namespace std;
//declaring array in a function as a parameter
void arr_function(int number[x]){
    for(int i = 0; i < x; i++){
        cout<<number[i]<<"\n";
    }
}
int main(){
    cin>>x;
    int number[x];
    arr_function(number);
    return 0;
}