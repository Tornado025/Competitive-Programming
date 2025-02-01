#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')c++;
        }
        cout<<c<<"\n";
    }
}