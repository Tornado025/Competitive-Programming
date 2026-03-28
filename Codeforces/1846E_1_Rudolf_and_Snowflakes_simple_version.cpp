#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    set<int> s;
    for(int i=2;i<=1000000;i++) {
        int d1=i*i;
        int d2=i+1;
        for(int j=3;j<=64;j++){
            d2+=d1;
            if(d2>1e18) break;
            s.insert(d2);
            if(d1>(1e18/i))break;
            d1*=i;
        }
    }
    int t;
    cin >> t;//1000015000057

    while (t--) {
        int n;cin>>n;
        if(n<5) {
            cout<<"NO\n";
            continue;
        }
        else if(s.find(n)!=s.end()) cout<<"YES\n";
        else {
            int d=1+4*(n-1);
            int sq=(int)sqrt(d);
            if(sq*sq!=d) {
                cout<<"NO\n";
                continue;
            }
            sq=(sq-1)/2;
            int e=sq*(sq+1)+1;
            if(e==n) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}