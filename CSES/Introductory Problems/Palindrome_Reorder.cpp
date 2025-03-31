#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    string s;cin>>s;
    int n=s.length();
    map<char,int>ch;
    for(int i=0;i<n;i++)ch[s[i]]++;
    int ct=0;
    for(char i='A';i<='Z';i++){
        if(ch[i]%2!=0)ct++;
    }
    if(ct>1||(ct==1&&(n%2==0)))cout<<"NO SOLUTION"<<"\n";
    else{
        string a="";
        for(char i='A';i<='Z';i++){
            if(ch[i]%2!=0){
                for(int j=0;j<ch[i];j++)
                a.push_back(i);
            }
        }
        string ans="";
        for(char i='A';i<='Z';i++){
            if(ch[i]%2==0){
                for(int j=0;j<ch[i]/2;j++)
                ans.push_back(i);
            }
        }
        string rev=ans;
        reverse(rev.begin(),rev.end());
        if(ct==1)cout<<ans+a+rev<<"\n";
        else cout<<ans+rev<<"\n";
    }
}