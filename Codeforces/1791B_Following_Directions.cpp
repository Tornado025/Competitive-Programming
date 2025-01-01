#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int a=0,b=0;
        bool flag=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L')a--;
            else if(s[i]=='R')a++;
            else if(s[i]=='U')b++;
            else if(s[i]=='D')b--;
            if(a==1&&b==1){
                flag=true;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}