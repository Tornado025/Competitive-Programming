#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(),greater<int>());
        int arr1[k];
        for(int i=0;i<k;i++){
            cin>>arr1[i];
        }
        int ans=0;int d=0;
        for(int i=0;i<n;i++){
            if(arr1[arr[i]-1]>arr1[d]){
                ans+=arr1[d];
                d++;
            }
            else{
                ans+=arr1[arr[i]-1];
            }
        }
        cout<<ans<<"\n";
    }
}