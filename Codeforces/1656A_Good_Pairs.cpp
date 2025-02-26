#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int mini=10000000007;int maxi=0;
        int n;cin>>n;int arr[n];
        int a=0,b=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<mini){
                a=i+1;
                mini=arr[i];
            }
            if(arr[i]>maxi){
                b=i+1;
                maxi=arr[i];
            }
        }
        cout<<a<<" "<<b<<"\n"; 
    }
}