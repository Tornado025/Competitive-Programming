#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++) cin>>arr1[i];
        for(int i=0;i<n;i++) cin>>arr2[i];
        int d=arr1[0]-arr2[0];
        for(int i=0;i<n;i++){
            d=max(d,arr1[i]-arr2[i]);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr1[i]-arr2[i]==d) ans.push_back(i+1);
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}