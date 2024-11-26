#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int a=s.length();
    char ch=toupper(s[0]);
    cout<<ch<<s.substr(1,a-1)<<"\n";
}