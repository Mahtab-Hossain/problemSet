#include <iostream>

using namespace std;

int max(int x, int y){
    cout<<"enter two numbers: ";
    cin>>x>>y;
    cout<<"the bigest number entered is : ";
    //the below line means that if x is greater then y then it
    //will return x else y
    return (x>y)? x:y;
}
float max(float x, float y){
    cout<<"enter two numbers: ";
    cin>>x>>y;
    cout<<"the bigest number entered is : ";
    //the below line means that if x is greater then y then it
    //will return x else y
    return (x>y)? x:y;
}
double max(double x, double y){
    cout<<"enter two numbers: ";
    cin>>x>>y;
    cout<<"the bigest number entered is : ";
    //the below line means that if x is greater then y then it
    //will return x else y
    return (x>y)? x:y;
}

int main(){
    cout<<max(0,0);
    return 0;
}