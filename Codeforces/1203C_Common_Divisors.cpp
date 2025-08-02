#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int d=arr[0];
    for(int i=0;i<n;i++)d=gcd(d,arr[i]);
    int ans=0;
    for(int i=1;i*i<=d;i++){
        if(d%i==0){
            if(i==d/i)ans++;
            else ans+=2;
        }
    }
    cout<<ans<<"\n";
}