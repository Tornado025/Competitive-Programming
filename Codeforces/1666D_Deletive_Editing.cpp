#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        string s,t;cin>>s>>t;
        int a[26];int b[26];
        for(int i=0;i<26;i++)a[i]=0;
        for(int i=0;i<26;i++)b[i]=0;
        for(int i=0;i<s.length();i++)
        a[s.at(i)-65]++;
        for(int i=0;i<t.length();i++)
        b[t.at(i)-65]++;
        string s1="";
        for(int i=0;i<s.length();i++){
            if(a[s[i]-65]==b[s.at(i)-65])s1+=s[i];
            else if(a[s[i]-65]>b[s.at(i)-65])a[s[i]-65]--;
        }
        if(s1==t)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}