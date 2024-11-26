#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;string s;cin>>s;int d=0;
        map<int,int>ch;
        for(int i=0;i<n-1;i++){
            if(s[i]=='A'&&s[i+1]=='B'&&ch[i]==0){
                ch[i]++;
                swap(s[i],s[i+1]);
                if(i>=1){
                    i-=2;
                }
                else i=-1;
                //cout<<s<<"\n";
                d++;
            }
        }
        cout<<d<<"\n";
    }
}