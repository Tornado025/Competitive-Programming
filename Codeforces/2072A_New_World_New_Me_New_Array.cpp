#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k,b;cin>>n>>k>>b;
        if((n*b)<abs(k))cout<<"-1"<<"\n";
        else cout<<abs(k/b)+(k%b!=0)<<"\n";
    }
}