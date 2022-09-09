#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int size;
    cout<<"insert size: ";
    cin>>size;
    int array[size];
    for(int a=0;a<size;++a){
        cin>>array[a];
        array[a]=array[size];
    }
    cout<<"inserted value :"<<array[size];
    cout<<"sorted values"<<"\n";
    
    return 0;
}