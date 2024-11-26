#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n,k;cin>>n>>k;
        int d=0;
        if(n==k)d=n*(n+1)/2;
        else d=n*(n+1)/2-(n-k)*(n-k+1)/2;
        if(d%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}