#include <iostream>
using namespace std;

//declare class and class name
class chair{
    public:
    string table(string tab);
};
string chair::table(string tab){
    return tab;
}
int main(){
    chair ch;
    cout<<ch.table("This is a table");
    return 0;
}