#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr1[n];int arr2[n];
        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int i=0;i<n;i++)cin>>arr2[i];
        int maxi=0;int ans=0;int sum=0;
        for(int i=0;i<min(n,k);i++){
            sum+=arr1[i];//prefix sumish
            maxi=max(maxi,arr2[i]);//finding max of second array
            ans=max(ans,sum+maxi*(k-i-1));
        }
        cout<<ans<<"\n";
    }
}