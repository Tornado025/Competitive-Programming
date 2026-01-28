#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;map<int,int>md;
        int arr[n];int maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int d=arr[i]%x;
            if(d>x/2)md[d-x]++;
            else md[d]++;
            maxi=max(maxi,arr[i]);
        }
        int ct=0;
        if(md[0]>0)ct++;
        for(int i=1;i<x;i++){
            if(2*i==x&&md[i]>0)ct++;
            else if(md[i]>0||md[-i]>0){
                int d=max(md[i],md[-i]);
                int e=min(md[i],md[-i]);
                ct+=1+max(0ll,abs(d-e)-1);
            }
            //cout<<ct<<"\n";
        }
        cout<<ct<<"\n";
    }
}