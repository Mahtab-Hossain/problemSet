#include <iostream>
#include <string>

using namespace std;
void bit(){
    int numberOfString, x(0);
    string s;
    cin>>numberOfString;
    while (numberOfString--)
    {
        cin>>s;
        if(s[1]== '+'){
            ++x;
        }
        else{
            --x;
        }

    }
    cout<<x<<endl;
        
}

int main(){

    bit();
    return 0;    
}