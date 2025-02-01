#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        int pref[n];int s=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s+=arr[i];
        }
        pref[0]=arr[0];
        for(int i=1;i<n-1;i++)pref[i]=arr[i]+pref[i-1];
        int gcd1=0;
        for(int i=0;i<n-1;i++){
            gcd1=max(gcd1,gcd(pref[i],s-pref[i]));
        }
        cout<<gcd1<<"\n";
    }
}