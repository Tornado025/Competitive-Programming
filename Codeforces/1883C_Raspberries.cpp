#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;cin>>t;
        for(int m=1;m<=t;m++) {
        int n,k;cin>>n>>k;
        int arr[n];int d=k;int e=0;
        for(int i=0;i<n;i++) 
        cin>>arr[i];
        for(int i=0;i<n;i++) {
        if((arr[i]%k==0)||(k==4&&e==2)) {
        d=0;
        break;
        }
        else{
        d=min(d,k-(arr[i]%k));
        }
        if(arr[i]%2==0)e++;
        }
        if(k!=4)cout<<d<<"\n";
        else
        cout<<min(d,(2-e)) <<"\n";
    }}