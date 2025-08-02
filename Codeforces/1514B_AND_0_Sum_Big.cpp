#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;int modi=1000000007;int ans=1;
        for(int i=0;i<k;i++){
            ans=(ans*n)%modi;
        }
        cout<<ans<<"\n";
    }
}