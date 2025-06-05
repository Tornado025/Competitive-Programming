#include <bits/stdc++.h>
#define int long long int
using namespace std;
int64_t findmin(int l,int r,int idx,int arr[],int n){
    if(idx==n)return abs(l-r);
    return min(findmin(l+arr[idx],r,idx+1,arr,n),findmin(l,r+arr[idx],idx+1,arr,n));
}
int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<findmin(0,0,0,arr,n)<<"\n";
}