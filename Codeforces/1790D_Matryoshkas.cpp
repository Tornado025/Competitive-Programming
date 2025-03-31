#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        map<int,int>arr1;set<int>track;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr1[arr[i]]++;
            track.insert(arr[i]);
            track.insert(arr[i]+1);
        }
        int ans=0;int prev=0;
        for(auto i:track){
            ans+=max(0ll,arr1[i]-prev);
            prev=arr1[i];
        }
        cout<<ans<<"\n";
    }
}