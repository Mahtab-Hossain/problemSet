#include <iostream>
using namespace std;

void swap_numbers(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int number_1,number_2;
    cin>>number_1>>number_2;
    cout<<"before swap: ";
    swap_numbers(number_1,number_2);
    cout<<"after swap: ";
    cout<<number_1<<number_2;
    return 0;
}
