#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int n,m,k;cin>>n>>m>>k;
    int arr[n];int arr1[m];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>arr1[i];
    int diff[n];
    for(int i=0;i<n;i++)diff[i]=0;
    for(int i=0;i<m;i++){
        diff[i]+=arr1[i];
        diff[i+(n-m+1)]-=arr1[i];
    }
    for(int i=1;i<n;i++)diff[i]+=diff[i-1];
    for(int i=0;i<n;i++)cout<<(arr[i]+diff[i])%k<<" ";
    return 0;
}