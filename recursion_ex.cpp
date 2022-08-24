#include <iostream>
using namespace std;
//declaring recursive method
int addition(int number){
    cout<<"Keep adding number for addition and to quit press 1:";
    if(cin>>number && number > 1){
        return number + addition(number -1);//the main recursion
    }
    else{
        return 0;
    }
}
int main(){
    int result = addition(0);
    cout<<result;
    return 0;
}