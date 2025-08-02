#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s1,s2;cin>>s1>>s2;
        bool flag=true;int ct=0;
        if(n==1){
            if(s1[0]!=s2[0])cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
        }
        else{
            s1[n]='0';s2[n]='0';
            for(int i=0;i<n;i++){
                if(s1[i]=='1')ct++;
                else ct--;
                if((s1[i]==s2[i])!=(s1[i+1]==s2[i+1])&&ct!=0){
                    flag=false;
                    break;
                }
            }
            if(flag==true)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}