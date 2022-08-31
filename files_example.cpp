#include <iostream>
#include <fstream>
using namespace std;

void file_ex(){
    //write operation
    ofstream var1("c++.cpp");
    var1<<"this is text is writen by c++ ";
    //read operation
    string var2;
    ifstream readfile("c++.cpp");
    while(getline(readfile,var2)){
        cout<<var2;
    }
    var1.close();
    readfile.close();
}
int main(){
    file_ex();
    return 0;
}