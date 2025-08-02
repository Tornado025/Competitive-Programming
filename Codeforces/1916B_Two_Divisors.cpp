#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if(b%a==0)cout<<b*(b/a)<<"\n";
        else cout<<a*b/gcd(a,b)<<"\n";
    }
}