#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr1(n);vector<int> arr2(n);vector<int> arr3(n);vector<int> arr4(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i]>>arr2[i]>>arr3[i]>>arr4[i];
        }
        int ct=0;
        for(int i=0;i<n;i++){
            if(arr2[i]>arr4[i]){
                ct+=arr2[i]-arr4[i]+min(arr1[i],arr3[i]);
            }
            if(arr1[i]>arr3[i]){
                ct+=arr1[i]-arr3[i];
            }
        }
        cout<<ct<<"\n";
    }
}