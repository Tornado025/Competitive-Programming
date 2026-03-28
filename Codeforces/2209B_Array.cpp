#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int ans[n];
        vector<int> arr1;
        for(int i=n-1;i>=0;i--){
            auto it1=lower_bound(arr1.begin(),arr1.end(),arr[i]);
            auto it2=upper_bound(arr1.begin(),arr1.end(),arr[i]);
            int a=it1-arr1.begin();
            int b=arr1.size()-(it2-arr1.begin());
            ans[i]=max(a,b);
            arr1.insert(it2,arr[i]);
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
}