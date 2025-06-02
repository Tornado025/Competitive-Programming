#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int d=0;int e=n-1;
        for(;d<n;d++){
            if((arr[d]+arr[n-1])%2==0)break;
        }
        for(;e>=0;e--){
            if((arr[0]+arr[e])%2==0)break;
        }
        cout<<min(n-e-1,d)<<"\n";
    }
}