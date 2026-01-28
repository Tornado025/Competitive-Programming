#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            int d=0;
            int arr1[x];
            for(int j=0;j<x;j++){
                cin >> arr1[j];
                d=max(d,arr1[j]-j);
            }
            arr.push_back({d,x});
        }
        sort(arr.begin(),arr.end());
        int ans=0;int d=0;
        for(int i=0;i<arr.size();i++){
            ans=max(ans,arr[i].first-d);
            d+=arr[i].second;
        }
        cout << ans+1 << endl;
    }
    return 0;
}