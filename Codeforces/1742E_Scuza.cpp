#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int pref[n];pref[0]=arr[0];
        vector<int>maxi;
        maxi.push_back(arr[0]);
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+arr[i];
            maxi.push_back(max(maxi[i-1],arr[i]));
        }
        for(int i=0;i<q;i++){
            int x;cin>>x;
            int c=upper_bound(maxi.begin(),maxi.end(),x)-maxi.begin();
            if(c==0)cout<<0<<" ";
            else cout<<pref[c-1]<<" ";
        }
        cout<<"\n";
    }
}