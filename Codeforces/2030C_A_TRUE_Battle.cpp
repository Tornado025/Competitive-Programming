#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;string s;cin>>s;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]&&s[i]=='1'){
                flag=true;
                break;
            }
        }
        if(flag==true||(s[0]=='1'||s[n-1]=='1'))cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
}}