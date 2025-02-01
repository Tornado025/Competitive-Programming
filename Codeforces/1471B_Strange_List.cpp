#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr[i].first=x;
            arr[i].second=1;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i].first%k==0){
                arr.push_back({arr[i].first/k,arr[i].second*k});
            }
            else break;
        }
        int sum=0;
        for(int i=0;i<arr.size();i++)sum+=arr[i].first*arr[i].second;
        cout<<sum<<"\n";
    }
}