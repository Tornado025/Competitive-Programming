#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n<=3)cout<<n<<"\n";
        else if(n%2==0)cout<<0<<"\n";
        else cout<<1<<"\n";
    }
}