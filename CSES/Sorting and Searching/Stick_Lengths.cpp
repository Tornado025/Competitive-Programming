#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int med=arr[n/2];
    int sum=0;
    for(int i=0;i<n;i++)sum+=abs(arr[i]-med);
    cout<<sum<<"\n";
}