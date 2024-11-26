#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int x,y,k;cin>>x>>y>>k;
        int d=k-k%x+y;
        if(d<=k)cout<<d<<"\n";
        else cout<<(d-x)<<"\n";
    }
}