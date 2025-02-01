#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int l=s.length()-1;int r=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'&&i<l)l=i;
            else if(s[i]=='1')r=i;
        }
        cout<<(l-r+1)<<"\n";
    }
}