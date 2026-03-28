#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;cin>>t;
    while(t--){
        int n,a,b;cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int ans=0;int arr1[n];int sum=0;
        for(int i=0;i<n;i++){
            int d=((arr[i]-arr[i]%a)-((a-b)*(arr[i]/a)));
            arr1[i]=d;
            sum+=d;
        }
        for(int i=0;i<n;i++){
            sum=sum-arr1[i]+arr[i];
            ans=max(ans,sum);
            sum=sum+arr1[i]-arr[i];
        }
        cout<<ans<<endl;
    }
}