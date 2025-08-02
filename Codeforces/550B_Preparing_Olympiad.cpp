#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,l,r,x;cin>>n>>l>>r>>x;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int d=1<<n;int ct=0;
    for(int i=0;i<d;i++){
        int sum=0,mini=1000000007,maxi=0;
        for(int j=0;j<n;j++){
            if((1<<j)&i){
                sum+=arr[j];
                mini=min(arr[j],mini);
                maxi=max(arr[j],maxi);
            }
        }
        if((maxi-mini)>=x&&sum>=l&&sum<=r)ct++;
    }
    cout<<ct<<"\n";
}