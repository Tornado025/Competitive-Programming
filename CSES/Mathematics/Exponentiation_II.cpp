#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int MOD = 1e9 + 7;

int32_t binpow(int a, int b, int m) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int d=binpow(b,c,MOD-1);
        int e=binpow(a,d,MOD);
        cout<<e<<endl;
    }
    return 0;
}