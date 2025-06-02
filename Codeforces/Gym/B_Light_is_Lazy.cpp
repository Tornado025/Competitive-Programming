#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        if(n>m)cout<<"-1"<<"\n";
        else{
            int d=m-n+1;
            cout<<d<<" ";
            for(int i=1;i<=n;i++){
                if(i==d)continue;
                else cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}