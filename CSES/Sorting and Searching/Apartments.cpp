#include <bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main(){
    int n,m,k;cin>>n>>m>>k;
    int arr1[n];int arr2[m];
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<m;i++)cin>>arr2[i];
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int d=0;int ct=0;int i=0;
    while(i<n&&d<m){
        if(abs(arr1[i]-arr2[d])<=k){
            ct++;i++;d++;
        }
        else{
            if(arr1[i]-arr2[d]>k)d++;
            else i++;
        }
    }
    cout<<ct<<"\n";
}