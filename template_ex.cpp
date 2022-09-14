#include <iostream>

using namespace std;

template <class data_type> data_type display(data_type x,data_type y){
    cout<<"enter two numbers";
    cin>>x>>y;
    cout<<"max number entered ";
    return (x>=y)? x:y;
}
int main(){
    cout<<display(0,0);
}