#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    string a,b;cin>>a>>b;
    int rev=0;string s="";
    for(int i=a.length()-1;i>=0;i--){
        char d1=a.at(i);char d2=b.at(i);
        if(d1!=d2)s='1'+s;
        else s='0'+s;
    }
    cout<<s<<"\n";
}