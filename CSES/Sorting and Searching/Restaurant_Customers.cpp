#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        arr.push_back({x,1});
        arr.push_back({y,-1});
    }
    sort(arr.begin(),arr.end());
    int sum=0;int maxi=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i].second;
        maxi=max(maxi,sum);
    }
    cout<<maxi<<"\n";
}