#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int m,n;cin>>m>>n;
        int sum=0;int ct=0;
        int arr[m*n];
        for(int i=0;i<(m*n);i++){
            cin>>arr[i];
            sum+=abs(arr[i]);
            if(arr[i]<0)ct++;
            arr[i]=abs(arr[i]);
        }
        sort(arr,arr+(m*n));
        if(ct%2==0)cout<<sum<<"\n";
        else cout<<sum-2*abs(arr[0])<<"\n";
    }
}