#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int>>a(n);
        vector<pair<int,int>>b(n);
        vector<pair<int,int>>c(n);
    	for(int i=0;i<n;i++){
            int x;cin>>x;
            a.push_back({x,i+1});
        }
        for(int i=0;i<n;i++){
            int x;cin>>x;
            b.push_back({x,i+1});
        }
        for(int i=0;i<n;i++){
            int x;cin>>x;
            c.push_back({x,i+1});
        }
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        sort(b.begin(),b.end(),greater<pair<int,int>>());
        sort(c.begin(),c.end(),greater<pair<int,int>>());
        int maxi=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int d=a[i].second;int e=b[j].second;int f=c[k].second;
                    if(d!=e&&e!=f&&d!=f)
                    maxi=max(maxi,(a[i].first+b[j].first+c[k].first));
                }
            }
        }
        cout<<maxi<<"\n";
    }
}