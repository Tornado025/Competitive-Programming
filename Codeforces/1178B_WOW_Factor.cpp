#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    string s;cin>>s;
    int n=s.length();
    int pref[n];int suff[n];
    for(int i=0;i<n;i++)pref[i]=suff[i]=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]&&s[i]=='v')pref[i]=pref[i-1]+1;
        else pref[i]=pref[i-1];
    }
    for(int i=n-2;i>=0;i--){
        if(s[i]==s[i+1]&&s[i]=='v')suff[i]=suff[i+1]+1;
        else suff[i]=suff[i+1];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='o')ans+=pref[i]*suff[i];
    }
    cout<<ans<<"\n";
}