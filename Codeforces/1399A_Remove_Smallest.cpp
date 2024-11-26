#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    bool flag=true;
    for(int i=0;i<n-1;i++){ 
        if(arr[i+1]-arr[i]>1){
            flag=false;
            break;
        }
    }
    if(flag==true)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}}
