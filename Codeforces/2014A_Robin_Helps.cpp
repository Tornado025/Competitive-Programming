#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n,k;cin>>n>>k;int arr[n];
        int ct=0;int d=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=k)d+=arr[i];
            if(arr[i]==0&&d>0){
                ct++;d--;
            }
        }
        cout<<ct<<endl;
    }
}