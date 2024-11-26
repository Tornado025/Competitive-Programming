#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    string s;cin>>s;
    bool flag=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            flag=true;
            break;
        }
    }
    if(flag==true)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}