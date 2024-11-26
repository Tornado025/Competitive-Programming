#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int x,k;cin>>x>>k;
        string s;cin>>s;
        int e=0;int d[26];
        for(int i=0;i<26;i++)d[i]=0;
        for(int i=0;i<x;i++){
            d[s.at(i)-97]++;
        }
        for(int i=0;i<26;i++)if(d[i]%2!=0)e++;
        int f=k+1;
        if(e>f)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}