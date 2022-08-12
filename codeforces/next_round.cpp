#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >>n>>k;
    int a;
    for(int i=0;i<k;++i)
    {
        if(cin>>a && a==0){
            cout<<i<<endl;
        
        }
    }
    int b;
    for(int i=k;i<n;++i){
        if(cin>>b && b != a){
            cout<<i<<endl;
        }
    }
    cout<<n<<endl;
    return 0;
}
