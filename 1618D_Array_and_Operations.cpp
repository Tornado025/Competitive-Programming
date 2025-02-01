#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int s=0;
        sort(arr,arr+n);
        for(int i=0;i<n-2*k;i++)s+=arr[i];
        for(int i=0;i<k;i++){
            s=s+(arr[n-2*k+i]/arr[n-k+i]);
        }
        cout<<s<<"\n";
    }
}