#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    string s;cin>>s;
    bool flag=false;int d=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='0'){
            d=i;
            flag=true;
            break;
        }
    }
    if(flag==false)cout<<s.substr(0,s.length()-1);
    else cout<<s.substr(0,d)+s.substr(d+1,s.length()-d)<<"\n";
}