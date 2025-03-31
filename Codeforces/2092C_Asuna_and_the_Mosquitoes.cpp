#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        int sum=0;int ct=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                ct++;
            }
            sum+=arr[i];
        }
        sort(arr,arr+n);
        if(ct==0||ct==n)cout<<arr[n-1]<<"\n";
        else cout<<sum-ct+1<<"\n";
    }
}