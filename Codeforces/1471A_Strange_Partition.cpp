#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n,x;cin>>n>>x;
        int arr[n];int mini=0,maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%x==0)maxi+=arr[i]/x;else maxi+=arr[i]/x+1;
            mini+=arr[i];
        }
        if(mini%x!=0)cout<<(mini)/x+1<<" "<<maxi<<"\n";
        else cout<<(mini)/x<<" "<<maxi<<"\n";
    }
}