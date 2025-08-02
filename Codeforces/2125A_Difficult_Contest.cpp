#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        sort(s.begin(),s.end(),greater<char>());
        cout<<s<<"\n";
    }
}