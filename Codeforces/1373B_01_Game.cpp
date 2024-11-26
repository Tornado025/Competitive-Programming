#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        string s;cin>>s;
        int e=0;int f=0;
        for(int i=0;i<s.length();i++)
        if(s[i]=='0')e++;else f++;
        if(min(e,f)%2==0)cout<<"NET"<<"\n";
        else cout<<"DA"<<"\n";
    }
}