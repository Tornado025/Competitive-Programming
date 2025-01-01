#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    string s;cin>>s;
    int a=0;int b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')a++;
        else if(s[i]=='1')b++;
    }
    if(a!=b)cout<<"-1"<<"\n";
    else{
        vector<int>a;
        int d=0;
        while(s.length()>0){
            if(s[0]!=s[s.length()-1]){
                s=s.substr(1,s.length()-2);
                d++;
            }
            else{
            if(s[0]=='1'){
                s="01"+s;
                a.push_back(d);
            }
            else{
                s+="01";
                a.push_back(n-d);
            } 
            n+=2;
            }
            //cout<<s<<"\n";
        }
        cout<<a.size()<<"\n";
        for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
}}