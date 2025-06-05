#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,int>track;
    int l=0;int ans=0;
    for(int i=0;i<n;i++){
        if(track.find(arr[i])==track.end()){
            track.insert({arr[i],i});
        }
        else{
            if(track[arr[i]]>=l)
            l=track[arr[i]]+1;
            track[arr[i]]=i;
        }
        ans=max(ans,(i-l+1));
    }
    cout<<ans<<"\n";
}