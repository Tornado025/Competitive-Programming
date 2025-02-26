#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
        int n;cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        if(sum%2==0&&arr[n-1]<=(sum-arr[n-1]))cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
}