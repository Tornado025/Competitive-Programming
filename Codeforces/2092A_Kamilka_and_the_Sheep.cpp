#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        if(arr[n-1]!=arr[0])
        cout<<arr[n-1]-arr[0]<<"\n";
        else cout<<arr[0]<<"\n";
    }
}