#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    
    //base unsigned integer type variable declaration
    ptrdiff_t nos;//== number of stone
    cin>>nos;
    string s;
    cin>>s;
    //erase function removes elements from a container from the specified position or rage
    s.erase(unique(s.begin(),s.end(),s.end()));
    string st;
    st= nos -s.length();
    cout<<st<<endl;
    return 0;
}