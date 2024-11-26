#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
        int ct=0;
        if(arr[0]!=0)ct=1;
        for(int i=0;i<n-1;i++)if(arr[i]==0&&arr[i+1]!=0)ct+=1;
        if(ct>2)ct=2;
        cout<<ct<<endl;
    }
}