#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int mini=10;
        while(n!=0){
            mini=min(mini,n%10);
            n/=10;
        }
        cout<<mini<<"\n";
    }
    return 0;
}