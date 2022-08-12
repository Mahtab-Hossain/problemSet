#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a ;
    cout<<"enter the value of a :";
    cin>>a;
    while (a<20)
    {
        if(a == 15)
        {
            a=a+1;
            //cout<<a;
        }
        cout<<"the value of a: "<<a<<endl;
        a++;
    }
    return 0;
}