#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int ans=100000007;
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=i)ans&=arr[i];
        }
        cout<<ans<<"\n";
    }
}