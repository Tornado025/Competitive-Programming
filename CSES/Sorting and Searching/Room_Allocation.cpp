#include <bits/stdc++.h>
#define int long long int
using namespace std;    
int32_t main(){
    int n;cin>>n;vector<pair<pair<int,int>,int>>arr(n);
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        arr[i].first.first=x;arr[i].first.second=y;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    int ct=0;int ans[n];
    for(int i=0;i<n;i++){
        if(pq.empty()||pq.top().first>=arr[i].first.first){
            ct++;
            pq.push({arr[i].first.second,ct});
            ans[arr[i].second]=ct;
        }
        else{
            int d=pq.top().second;
            pq.pop();pq.push({arr[i].first.second,d});
            ans[arr[i].second]=d;
        }
    }
    cout<<ct<<"\n";
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}