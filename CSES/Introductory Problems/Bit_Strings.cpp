#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int mod=1000000007;int ans=1;
    for(int i=1;i<=n;i++){
        ans*=2;
        ans%=mod;
    }
    cout<<ans<<"\n";
}