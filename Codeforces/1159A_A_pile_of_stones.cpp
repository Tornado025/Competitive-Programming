#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;string s;cin>>n>>s;
    int a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+')a++;
        else a--;
        if(a<0)a=0;
    }
    cout<<a<<"\n";
}