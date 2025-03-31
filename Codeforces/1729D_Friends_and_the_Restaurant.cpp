#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr1[n];int arr2[n];
        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int i=0;i<n;i++)cin>>arr2[i];
        int diff[n];
        for(int i=0;i<n;i++)diff[i]=arr2[i]-arr1[i];
        sort(diff,diff+n,greater<int>());
        int j=n-1;int ct=0;
        for(int i=0;i<n;i++){
            while(i<=j&&diff[i]+diff[j]<0)j--;
            if(j<=i)break;
            ct++;j--;
        }
        cout<<ct<<"\n";
    }
}