#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        c-=a;d-=b;
        if(max(a,b)>2*min(a,b)+2||max(c,d)>2*min(c,d)+2)cout<<"NO\n";
        else cout<<"YES\n";
    }
}