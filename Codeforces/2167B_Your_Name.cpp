#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define MOD 1000000007
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;
        string a,b;cin>>a>>b;
        sort(a.begin(),a.end());sort(b.begin(),b.end());
        if(a.compare(b)==0)cout<<"YES\n";else cout<<"NO\n";
    }
}