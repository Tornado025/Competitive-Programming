#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int l,r,k;cin>>l>>r>>k;
        int d=(r/k)-l+1;int e=0;
        cout<<max(d,e)<<"\n";
    }
}