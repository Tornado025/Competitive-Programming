#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        if(n==1&&m==1)cout<<"0"<<"\n";
        else if(min(n,m)==1)cout<<"1"<<"\n";
        else cout<<"2"<<"\n";
    }
}