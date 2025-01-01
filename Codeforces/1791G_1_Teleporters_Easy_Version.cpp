#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,a;cin>>n>>a;
        int arr[n];int x=0;
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i]=i+1+x;
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)arr[i+1]+=arr[i];
        int ct=0;
        for(int i=0;i<n;i++){
            if(arr[i]>a)break;
            ct++;
        }
        cout<<ct<<"\n";
    }
}