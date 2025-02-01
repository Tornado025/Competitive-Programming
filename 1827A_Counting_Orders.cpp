#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    int mod=1000000007;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);vector<int> b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        int ans=1;
        for(int i=0;i<n;i++){
            int d=a.size()-(upper_bound(a.begin(),a.end(),b[i])-a.begin());
            ans=ans*max(d-i,0ll)%mod;
        }
        cout<<ans<<"\n";
    }
}