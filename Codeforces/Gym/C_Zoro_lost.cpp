#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')c++;
        }
        if(c>3)cout<<"NO"<<"\n";
        else if(s=="0"||s=="10"||s=="1")cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}