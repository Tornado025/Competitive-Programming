#include <bits/stdc++.h>
#define int long long int
using namespace std;
int ct(string s,string t){
    int c=0;
    int l=s.length();
    while(t.length()>0&&s.length()>0){
        if(s[s.length()-1]==t[t.length()-1])
        t.pop_back();
        else 
        c++;
        s.pop_back();
    }
    if(t.length()==0)
    return c;
    else 
    return l;
}
int32_t main() {
    int t;cin>>t;
    for(int m=1;m<=t;m++) {
        string s;cin>>s;
        cout<<min(ct(s,"00"),min(min(ct(s,"50"),ct(s,"25")),ct(s,"75")))<<"\n";
    }
}