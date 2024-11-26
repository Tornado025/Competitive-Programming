#include <bits/stdc++.h> 
using namespace std; 
#define int long long int
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){ 
    int n;cin>>n;
    int arr[n];int sum=0;
    for(int i=0;i<n;i++) {cin>>arr[i];
        if(i==n-2) continue; 
        sum+=arr[i]; 
    }
    cout<<(sum-arr[n-2])<<endl;
}
} 
