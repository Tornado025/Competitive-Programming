#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int s=0;
        for(int i=0;i<n/2;i++){
            s=gcd(s,arr[i]-arr[n-i-1]);
        }
        cout<<s<<"\n";
    }
}