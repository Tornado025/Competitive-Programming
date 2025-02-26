#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)arr[i]=i+1;
        sort(arr,arr+n,greater<int>());
        vector<int>arr2(n);int d=0;
        for(int i=0;i<(n-(k+1));i++)arr2[i]=arr[i];
        d=(n-(k+1));
        for(int i=n-1;i>=(n-(k+1));i--)arr2[d++]=arr[i];
        for(int i=0;i<n;i++)cout<<arr2[i]<<" ";
        cout<<"\n";
    }
}