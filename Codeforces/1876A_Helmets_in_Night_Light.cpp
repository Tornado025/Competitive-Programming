#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<pair<int,int>>arr={{k,n+1}};
        int arr1[n];int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        for(int i=0;i<n;i++){
            arr.push_back({arr2[i],arr1[i]});
        }
        sort(arr.begin(),arr.end());
        int ans=k;int d=1;int i=0;
        while(d<n){
            int rem=n-d;
            if(arr[i].second<=rem){
                d+=arr[i].second;
                ans+=arr[i].first*arr[i].second;
            }
            else{
                ans+=arr[i].first*rem;
                d=n;
            }
            i++;
        }
        cout<<ans<<"\n";
    }
}