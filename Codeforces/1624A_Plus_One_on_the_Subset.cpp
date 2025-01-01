#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int maxi=arr[0];int mini=arr[0];
        for(int i=0;i<n;i++){
            maxi=max(arr[i],maxi);
            mini=min(arr[i],mini);
        }
        cout<<(maxi-mini)<<"\n";
    }
}