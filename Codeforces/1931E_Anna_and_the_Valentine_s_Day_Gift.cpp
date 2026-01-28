#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t digct(int n){
    int ct=0;
    while(n){
        ct++;
        n/=10;
    }
    return ct;
}
int32_t dig0ct(int n){
    int ct=0;
    while(n){
        if(n%10==0)ct++;
        else break;
        n/=10;
    }
    return ct;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;cin>>n>>k;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int ans=0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int a=dig0ct(arr[i]);int b=digct(arr[i]);
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        /*
        for(int i=0;i<n;i++){
            cout<<v[i].first<<" "<<v[i].second<<"\n";
        }
        */
        for(int i=0;i<n;i++){
            if(i%2==0)ans+=v[i].second-v[i].first;
            else ans+=v[i].second;
        }
        if(ans<=k)cout<<"Anna"<<"\n";else cout<<"Sasha"<<"\n";
    }
}