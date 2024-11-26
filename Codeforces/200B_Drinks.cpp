#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double ans=(double)sum/n;
    cout<<ans<<"\n";
}