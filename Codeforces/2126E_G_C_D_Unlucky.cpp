#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int pref[n];int suff[n];
        for(int i=0;i<n;i++)cin>>pref[i];
        for(int i=0;i<n;i++)cin>>suff[i];
        int arr[n];
        for(int i=0;i<n;i++)arr[i]=lcm(pref[i],suff[i]);
        bool flag=true;
        int gcd1=0;
        for(int i=0;i<n;i++){
            gcd1=gcd(gcd1,arr[i]);
            if(gcd1!=pref[i]){
                flag=false;
                break;
            }
        }
        gcd1=0;
        for(int i=n-1;i>=0;i--){
            gcd1=gcd(gcd1,arr[i]);
            if(gcd1!=suff[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}