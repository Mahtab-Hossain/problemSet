#include <iostream>
using namespace std;

//function with double parameter
double addition(double number1, double number2){
    cin>>number1>>number2;
    return number1+number2;
}
//main function
int main(){
    cout<<addition(0,0);
    return 0;
}