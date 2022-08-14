#include <iostream>
using namespace std;

int main(){
    int dist,n,d,f[100+2]={0},s,t;
    cin>>n;
    for(int i=2;i<n+2;++i){
        cin>>d;
        f[i]=f[i-1]+d;
    }
    cin>>s>>t;
    if(s>t){
        swap(s,t);
    }
    dist=f[t]-f[s];
    cout<<min(dist,(f[n+1]-dist))<<endl;
    return 0;
}