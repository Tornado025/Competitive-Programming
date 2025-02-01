#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];map<int,int>cnt;int maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%k==0)continue;
            cnt[k-arr[i]%k]++;
            maxi=max(maxi,cnt[k-arr[i]%k]);
        }
        int ans=0;
        for(auto[key,val]:cnt){
            if(val==maxi){
                ans=k*(val-1)+key+1;
            }
        }
        cout<<ans<<"\n";
    }
}