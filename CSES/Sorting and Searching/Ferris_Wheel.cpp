#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,x;cin>>n>>x;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int i=0;int j=n-1;
    int ct=0;
    while(j>=i){
        if(arr[i]+arr[j]<=x){
            i++;j--;
        }
        else j--;
        ct++;
    }
    cout<<ct<<"\n";
}