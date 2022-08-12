#include <iostream>
using namespace std;

int main(){
    int n,k,a,b;
    cin >>n>>k;
    for(int i=0;i<k;++i)
    {
        if(cin>>a && a==0){
            cout<<i<<endl;
            return 0;
        }
    }
    for(int i=k;i<n;++i){
        if(cin>>b && b != a){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
    return 0;
}
