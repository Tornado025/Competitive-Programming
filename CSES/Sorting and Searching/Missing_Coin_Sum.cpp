#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int ans=1;
    for(int i=0;i<n;i++){
        if(ans<arr[i])break;
        ans+=arr[i];
    }
    cout<<ans<<"\n";
}