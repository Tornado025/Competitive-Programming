#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    int arr1[n];int arr2[n];
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<n;i++)cin>>arr2[i];
    pair<int,int>ans={0,0};
    for(int i=0;i<n;i++){
        pair<int,int>dp;
        dp={max(ans.first,ans.second+arr1[i]),max(ans.first+arr2[i],ans.second)};
        ans=dp;
    }
    cout<<max(ans.first,ans.second)<<"\n";
}