#include <iostream>
#include <fstream>
using namespace std;

void file_ex(){
    //write operation
    ofstream var1("c++.txt");
    var1<<"this is text is writen by c++ ";
    var1.close();
    //read operation
    string var2;
    ifstream readfile("c++.txt");
    while(getline(readfile,var2)){
        cout<<var2;
    }
    readfile.close();
}
int main(){
    file_ex();
    return 0;
}