#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;cin>>m>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mini=10000;
    sort(arr,arr+n);
    for(int i=0;i<=n-m;i++){
        int d=arr[i+m-1]-arr[i];
        mini=min(mini,d);
    }
    cout<<mini<<"\n";
}