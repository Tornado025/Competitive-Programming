#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        bool flag=false;
        if(s.length()%2==0){
            int l=0,r=0,d=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='(')l++;
                else r++;
                if(l==r)d++;
                if(d>1){
                    flag=true;
                    break;
                }
            }
            if(flag==true)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else cout<<"YES"<<"\n";
    }
}