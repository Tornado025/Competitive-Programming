#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        bool flag1=false;bool flag2=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)flag1=true;
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==1)flag2=true;
        }
        if(flag1&&flag2)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}