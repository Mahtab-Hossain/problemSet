#include <iostream>
#include <vector>
#include <ostream>
using namespace std;

vector<int> divisors[1000002];

void Div(int number){
        for(int i=1;i<=number;i++){
            for(int j=i;j<=number;j++){
                divisors[j].push_back(i);
            }
        }
    }

int main(){
    cout<<"thi is the number";
    Div(5);
    return 0;
}