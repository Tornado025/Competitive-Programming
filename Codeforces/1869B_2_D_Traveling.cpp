#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k,a,b;cin>>n>>k>>a>>b;
        int x[n];int y[n];
        int minix=10000000000000007;int miniy=100000000000007;
        for(int i=0;i<n;i++)cin>>x[i]>>y[i];
        int d=abs(x[a-1]-x[b-1])+abs(y[a-1]-y[b-1]);
        for(int i=0;i<k;i++){
            minix=min(abs(x[a-1]-x[i])+abs(y[a-1]-y[i]),minix);
            miniy=min(abs(x[b-1]-x[i])+abs(y[b-1]-y[i]),miniy);
        }
        cout<<min(minix+miniy,d)<<"\n";
    }
}