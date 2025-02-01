#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int l=0;int h=2000000007;
        while(l<h){
            int mid=l+(h-l+1)/2;int tot=0;
            for(int i=0;i<n;i++){
                tot+=max(mid-arr[i],0ll);
            }
            if(tot<=x)l=mid;
            else h=mid-1;
        }
        cout<<l<<"\n";
    }
}