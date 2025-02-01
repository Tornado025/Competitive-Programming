#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int arr[n];int arr1[m];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<m;i++)cin>>arr1[i];
        int s=0;int d=0;
        for(int i=0;i<n;i++){
            if(d<m){
                if(arr1[arr[i]-1]>arr1[d]){
                    s+=arr1[d];
                    d++;
                }
                else s+=arr1[arr[i]-1];
            }
            else s+=arr1[arr[i]-1];
        }
        cout<<s<<"\n";
    }
}