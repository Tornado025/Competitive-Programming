#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n=7;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6]-(arr[0]+arr[1])<<"\n";  
    }
}