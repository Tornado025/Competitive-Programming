#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;vector<pair<pair<int,int>,int>>v(n);
        for(int i=0;i<n;i++){
            int x,y,z;cin>>x>>y>>z;
            v[i]={make_pair(x,y),z};
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(k>=v[i].first.first&&k<=v[i].first.second&&k<=v[i].second){
                k=v[i].second;
            }
            else continue;
        }
        cout<<k<<"\n";
    }
}