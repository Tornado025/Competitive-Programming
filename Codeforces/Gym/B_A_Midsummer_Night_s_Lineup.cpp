#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int d=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                d+=arr[i]-arr[i+1];
                arr[i+1]=arr[i];
            }
        }
        cout<<d<<"\n";
    }
}