#pragma GCC diagnostic ignored "-Wmultichar"
#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <typeinfo>

using namespace std;

void math(){
    int num1,num2,num3;
    num1=num2=num3=0;
    string s;
    char ss;
    cin>>s;
    for(int i =0; i== sizeof(s); i+=2){
        if(s[i]=='1'){
            num1+=1;
        }
        else if (s[i]=='2')
        {
            num2+=1;
        }
        else{
            num3+=1;
        }
    }
    ss ='1+'*num1+'2+'*num2+'3+'*num3;
    cout<<ss;
}
int main(){
    math();
    return 0;
}