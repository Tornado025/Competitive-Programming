#include <bits/stdc++.h>
#define int long long int
const int MOD=998244353;
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

using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;cin>>s;
        int d=s.length();
        int l=0,r=l+1;int k=s.length();mi ans=1;
        for(;l<s.length();){
            while(s[l]==s[r]&&r<s.length())r++;
            d--;
            mi a=r;mi b=l;
            ans*=(a-b);
            l=r;r=l+1;
        }
        for(int i=1;i<=d;i++){
            mi a=i;ans*=a;
        }
        cout<<d<<" "<<(int)ans<<"\n";
}}