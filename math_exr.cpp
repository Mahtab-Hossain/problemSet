#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void math(){
    int array[1001],count=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+'){
            continue;
        }
        else{
            array[count++]=s[i]-'0';
        }
    }
    sort(array,array+count);
    for(int i = 0; i<count; i++)
    {
        cout<<array[i];
        if(i==count-1){
            break;
        }
        cout<<"+";
    }
}
int main(){
    math();
    return 0;
}