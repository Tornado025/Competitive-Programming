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
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans+=abs(a[i+1]-a[i]);
        }
        int mini=ans; 
        int c=abs(a[1]-a[0]);int d=abs(a[n-1]-a[n-2]);
        c=max(c,d);
        for(int i=1;i<n-1;i++){
            int b=abs(-abs(a[i]-a[i-1])-abs(a[i+1]-a[i])+abs(a[i+1]-a[i-1]));
            c=max(b,c);
        }
        cout<<mini-c<<"\n";
    }
}