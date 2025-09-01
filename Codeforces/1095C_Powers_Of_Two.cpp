#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++)arr[i]=1;
    int sum=k;
    for(int i=k-1;i>=0;i--){
        while(sum+arr[i]<=n){sum+=arr[i];arr[i]*=2;}
    }
    if(sum==n){
        cout<<"YES\n";
        for(int i=0;i<k;i++)cout<<arr[i]<<" ";
        cout<<"\n";
    }
    else cout<<"NO\n";
}