#include <iostream>
#include <string>

using namespace std;

int main(){
    
    //variable declaration
    string word;
    cin>>word;

    word[0]=towupper(word[0]);
    cout<<word<<endl;


    return 0;
}
