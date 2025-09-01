#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;cin>>s;map<pair<int,int>,int>mp;
        int d=0,k=0;
        for(int i=0;i<n;i++){
            if(s[i]=='D')d++;
            else k++;
            int gc=gcd(d,k);
            mp[{d/gc,k/gc}]++;
            cout<<mp[{d/gc,k/gc}]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}