#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        int sum=arr[0];int maxi=arr[0];
        int mini=min(arr[0],arr[0]-arr[0]);
        for(int i=1;i<n;i++){
            if(abs(arr[i]%2)==abs(arr[i-1]%2)){
                mini=0;sum=0;
            }
            sum+=arr[i];
            maxi=max(maxi,sum-mini);
            mini=min(mini,sum);
        }
        cout<<maxi<<"\n";
    }
}