#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int d=0;
        for(int i=3;((i*i)+1)/2<=n;i+=2)d++;
        cout<<d<<"\n";
    }
}