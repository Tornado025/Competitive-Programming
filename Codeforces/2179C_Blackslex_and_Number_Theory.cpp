#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int l=a[0],r=a[n-1];
        int diffmin=1e9+7;
        for(int i=1;i<n;i++)diffmin=min(diffmin,a[i]-a[i-1]);
        cout<<max(a[1]-a[0],max(l,diffmin))<<"\n";
    }
}