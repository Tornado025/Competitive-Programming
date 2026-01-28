#include <bits/stdc++.h>
#define int long long int
using namespace std;    
const int MOD=998244353;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
    }

struct mi {
    int v;
    explicit operator int() const { return v; }
    mi() { v = 0; }
    mi(long long _v) : v(_v % MOD) { v += (v < 0) * MOD; }
};
mi &operator+=(mi &a, mi b) {
    if ((a.v += b.v) >= MOD) a.v -= MOD;
    return a;
}
mi &operator-=(mi &a, mi b) {
    if ((a.v -= b.v) < 0) a.v += MOD;
    return a;
}
mi operator+(mi a, mi b) { return a += b; }
mi operator-(mi a, mi b) { return a -= b; }
mi operator*(mi a, mi b) { return mi((long long)a.v * b.v); }
mi &operator*=(mi &a, mi b) { return a = a * b; }
mi pow(mi a, long long p) {
    assert(p >= 0);
    return p == 0 ? 1 : pow(a * a, p / 2) * (p & 1 ? a : 1);
}

mi inv(mi a) {
    assert(a.v != 0);
    return pow(a, MOD - 2);
}
mi operator/(mi a, mi b) { return a * inv(b); }


int32_t main(){
    int n;cin>>n;
    vector<int> a(n);
    mi ans=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<32;i++){
        pair<mi,mi> p={0,0};
        pair<mi,mi> q={0,0};
        for(int j=0;j<n;j++){
            p.first+=p.second;
            q.first+=q.second;
            int bit=a[j]>>i&1;
            if(bit==1){
                swap(p,q);
                p.first+=1;
                p.second+=1;
            }
            else{
                q.first+=1;
                q.second+=1;
            }
            mi c=binpow(2,i,MOD);
            ans+=c*p.first;
        }
    }
    cout<<(int)ans<<endl;
}