#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        string s="";int n;cin>>n;
        bool flag=false;
        for(int i=0;i<n-2;i++){
            string t;cin>>t;
            if(s==""||t[0]!=s[s.length()-1]){
                s+=t;
                flag=true;
            }
            else s+=t[1];
        }
        if(flag==false)s+='a';
        while(s.length()<n)s+=s[s.length()-1];
        cout<<s<<"\n";
    }
}