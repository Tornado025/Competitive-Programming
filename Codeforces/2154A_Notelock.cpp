#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define MOD 1000000007
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;int k;cin>>k;string s;cin>>s;
        int d=0;int e=-1e9;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i-e>=k&&s[i]=='1'){
                    d++;
                }
                if(s[i]=='1')e=i;
            }
        }
        cout<<d<<"\n";
    }
}