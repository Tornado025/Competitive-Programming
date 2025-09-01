#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>arr1;
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=i+1)continue;
            ans+=(lower_bound(arr1.begin(),arr1.end(),arr[i])-arr1.begin());
            arr1.push_back(i+1);
        }
        cout<<ans<<"\n";
    }
}