#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int maxi=max(x,y);
        int ans=0;
        if(maxi%2==0){
            ans=(maxi*maxi)-(y-1)-(maxi-x);
        }
        else{
            ans=(maxi*maxi)-(x-1)-(maxi-y);
        } cout<<ans<<"\n";
    }
}