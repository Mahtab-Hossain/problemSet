#include <iostream>
using namespace std;

void pointer_fun(){
    int x;
    int *p;
    cin>>x;
    p=&x;
    cout<<"this is the value of x: "<<x;
    cout<<"\n this is the value of var_x memory address: "<<&x;
    cout<<"\n p var valaue "<<p;
    cout<<"\n*p "<<*p;

}


int main(){
    pointer_fun();
    return 0;
}