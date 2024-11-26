#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,m;cin>>n>>m;int arr[n];int d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        if(arr[i]<0)d-=arr[i];
    }
    cout<<d<<"\n";
}