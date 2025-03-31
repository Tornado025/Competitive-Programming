#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int sum=0;
        if(n==2)cout<<arr[0]+arr[1]<<"\n";
        else{
        if(k>1){
            sort(arr,arr+n,greater<int>());
            for(int i=0;i<(k+1);i++)sum+=arr[i];
        }
        else if(k==1){
            int sum1=0;int sum2=0;int maxi=0;
            for(int i=1;i<n;i++)maxi=max(maxi,arr[i]);
            sum1=arr[0]+maxi;
            maxi=0;
            for(int i=0;i<n-1;i++)maxi=max(maxi,arr[i]);
            sum2=arr[n-1]+maxi;
            sum=max(sum1,sum2);
        }
        cout<<sum<<"\n";
    }
    }
}