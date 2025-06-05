#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int maxi=arr[0];int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0)sum=0;
    }
    cout<<maxi<<"\n";
}