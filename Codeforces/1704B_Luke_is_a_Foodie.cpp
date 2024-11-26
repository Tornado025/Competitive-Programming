#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi=arr[0];int mini=arr[0];int ct=0;
        for(int i=1;i<n;i++){
            maxi=max(arr[i],maxi);
            mini=min(arr[i],mini);
            if((maxi-mini)>(2*x)){
                ct++;
                maxi=arr[i];
                mini=arr[i];
            }
        }
        cout<<ct<<"\n";
    }
}