#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        map<int,pair<int,int>>ct;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        /*for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<ct[arr[i]].first<<" "<<ct[arr[i]].second<<"\n";
        }*/
        int mini=1000000000000000000000007;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n&&arr[j]==arr[i])j++;
            mini=min(mini,arr[i]*(i-j+n));
            i=j;
        }
        cout<<mini<<"\n";
    }
}