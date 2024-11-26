#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n,x,y;cin>>n>>x>>y;
        int arr[n];
        map<pair<int,int>,int>mp;int ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int a=arr[i]%x;
            int b=arr[i]%y;
            int c=(2*x-a)%x;
            int d=(y+b)%y;
            ans+=mp[{c,d}];
            mp[{a,b}]++;
        }
        cout<<ans<<"\n";
    }
}