#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int m;cin>>m;int n=m*(m-1)/2;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i+=m){
            cout<<arr[i]<<" ";
            m--;
        }
        cout<<"1000000000"<<"\n";
    }
}