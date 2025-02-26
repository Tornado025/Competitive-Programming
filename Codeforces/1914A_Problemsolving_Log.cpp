#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        map<char,int>a;
        for(int i=0;i<s.length();i++)a[s[i]]++;
        int d=0;
        for(char i='A';i<='Z';i++){
            if(a[i]>=(i-64))d++;
        }
        cout<<d<<"\n";
    }
}