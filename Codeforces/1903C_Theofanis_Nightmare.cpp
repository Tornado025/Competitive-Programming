#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int suff[n];
        suff[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+arr[i];
        }
        int d=suff[0];
        for(int i=1;i<n;i++){
            if(suff[i]>=0)d+=suff[i];
        }
        cout<<d<<"\n";
    }
}