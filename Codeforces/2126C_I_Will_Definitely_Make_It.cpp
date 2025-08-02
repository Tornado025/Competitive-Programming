#include <bits/stdc++.h>
#define int long long int
using namespace std;    
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int a=arr[k-1];
        sort(arr.begin(),arr.end());    
        int d=1;
        int e=upper_bound(arr.begin(),arr.end(),a)-arr.begin();
        bool flag=true;
        for(int i=e-1;i<n-1;i++){
            d+=(arr[i+1]-arr[i]);	
            if(d>arr[i]+1){
                flag=false;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}