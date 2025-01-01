#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            arr[i].second=i+1;
        }
        sort(arr.rbegin(),arr.rend());
        vector<int>arr1(n+1);
        for(int i=0;i<=n;i++)arr1[i]=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int d=i/2+1;
            ans+=2*arr[i].first*d;
            if(i%2==0)arr1[arr[i].second]=d;
            else arr1[arr[i].second]=-d;
        }
        cout<<ans<<"\n";   
        for(int i=0;i<=n;i++)cout<<arr1[i]<<" ";
        cout<<"\n";
    }
}