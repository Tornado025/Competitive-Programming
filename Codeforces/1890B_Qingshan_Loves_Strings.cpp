#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b;string s1,s2;cin>>a>>b>>s1>>s2;
        bool flag=true;
        for(int i=0;i<a-1;i++){
            if(s1[i]==s1[i+1]){
                string a1=s1[i]+s2+s1[i+1];
                for(int j=0;j<b+1;j++){
                    if(a1[j]==a1[j+1])flag=false;
                }
            }
            if(flag==false)break;
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}