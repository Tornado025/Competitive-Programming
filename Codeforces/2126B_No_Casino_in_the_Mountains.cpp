#include <bits/stdc++.h>
#define int long long int
using namespace std;    
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int ans=0;int d=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)d++;
            if(d>=k){
                    ans++;
                    i++;
                    d=0;
            }
            if(arr[i]==1){
                d=0;
            }
        }
        cout<<ans<<"\n";
    }
}