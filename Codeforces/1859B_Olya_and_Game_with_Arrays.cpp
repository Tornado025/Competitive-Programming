#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int min1=1000000007;int min2=1000000007;int sum=0;
        for(int i=0;i<n;i++){
            int a;cin>>a;int arr[a];
            for(int j=0;j<a;j++)cin>>arr[j];
            sort(arr,arr+a);
            min1=min(arr[0],min1);
            min2=min(arr[1],min2);
            sum+=arr[1];
        }
        //cout<<min1<<" "<<sum<<" "<<min2<<"\n";
        cout<<(min1+sum-min2)<<"\n";
    }
}
