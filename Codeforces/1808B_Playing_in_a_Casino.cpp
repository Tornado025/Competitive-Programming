#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;vector<vector<int>>arr(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;cin>>x;
                arr[j].push_back(x);
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            sort(arr[i].rbegin(),arr[i].rend());
            for(int j=1;j<=n;j++){
                ans+=arr[i][j-1]*(n-j);
                ans-=arr[i][j-1]*(j-1);
            }
        }
        cout<<ans<<"\n";
    }
}