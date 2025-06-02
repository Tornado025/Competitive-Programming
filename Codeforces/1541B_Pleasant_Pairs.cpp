#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]=i+1;
        }
        int ct=0;
        for(int i=1;i<=(2*n);i++){
            for(int j=1;i*j<=(2*n);j++){
                if(i==j)continue;
                if(mp.find(i)!=mp.end()&&mp.find(j)!=mp.end()){
                    if(i*j==mp[i]+mp[j])ct++;
                }
            }
        }
        cout<<ct<<"\n";
    }
}