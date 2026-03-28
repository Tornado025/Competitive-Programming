#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            int x,y;cin>>x>>y;
            arr.push_back({x,y});
        }
        double ans=0;double p=1;
        for(int i=n-1;i>=0;i--){
            ans=max(ans,arr[i].first+ans*(1-arr[i].second/100.0));
        }
        cout << fixed<<setprecision(10) << ans << endl;
    }
    return 0;
}