#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        arr.push_back({y,x});
    }
    sort(arr.begin(),arr.end());
    int ct=0;int curr=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i].second>=curr){
            ct++;
            curr=arr[i].first;
        }
    }
    cout<<ct<<"\n";
}