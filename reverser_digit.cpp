#include <iostream>

using namespace std;

int reverse_word(int w){
    int w;
    int result = 0;
    while(w!= 0){
        //cin>>w;
        int pop = w%10;
        w = w/10;
        int c = result * 10 + pop;
        if(c/10 !=result){
            return 0;
        }
        result = c;
    }
    cout<<"enter digit: ";
    cin>>w;
    return result;
}
int main(){
    //int w;
    //cout<<"Enter digit for reversing: ";
    //cin>>w;
    cout<<"Reversed digit:"<<reverse_word(w)<<endl;
    return 0;
}