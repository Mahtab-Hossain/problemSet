#include <iostream>
using namespace std;

class fruit{
    public:
    fruit(int number1,int number2);
    void total_number(int x,int y){
        
    }
};
fruit::fruit(int number1,int number2){
    cout<<"enter number 1 :";
    cin>>number1;
    cout<<"enter number 2 :";
    cin>>number2;
}

int main(){
    fruit obj(0,0);
    return 0;
}