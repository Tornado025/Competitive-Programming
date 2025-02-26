#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int l=0;int r=n-1;
        int a=arr[0];int b=arr[n-1];int ans=0;
        while(l<r){
            if(a==b)
                ans=max(ans,l+(n-r+1));
            if(a<=b) a+=arr[++l];
            else b+=arr[--r];
        }
        cout<<ans<<"\n";
    }
}