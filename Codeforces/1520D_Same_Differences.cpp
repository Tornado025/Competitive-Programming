#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            x-=i;
            ans+=mp[x];
            mp[x]++;
        }
        cout<<ans<<"\n";
    }
}