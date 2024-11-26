#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];
        vector<pair<int,int>> track(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=arr[i]%k;
            if(arr[i]==0)arr[i]=k;
            track.push_back({-arr[i],i+1});
        }
        sort(track.begin(),track.end());
        for(int i=0;i<n;i++){
            cout<<track[i].second<<" ";
        }
        cout<<"\n";
    }
}