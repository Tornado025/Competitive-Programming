#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        map<char,int>s1;
        for(int i=0;i<s.length();i++){
            s1[s[i]]++;
        }
        if(s1['-']<=1||s1['_']<1)cout<<"0"<<"\n";
        else{
            int d=s1['-']/2;int e=0;
            if(s1['-']%2==0)e=d;
            else e=d+1;
            cout<<d*e*s1['_']<<"\n";
        }
    }
}