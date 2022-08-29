#include <iostream>
using namespace std;

int factorial(int number){
    //base case
    if(number == 1){
        return 1;
    }
    else{
        return number*factorial(number - 1);
    }
}
int main(){
    cout<<"Tha factorial of entered number is -"<<factorial(6);
    return 0;
}