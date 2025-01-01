#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        map<string,int>ord;
        map<string,int>pos;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            string s1="";
            s1+=s[i];
            s1+=s[i+1];
            ord[s1]++;
            if(ord[s1]==1)pos[s1]=i;
            else if(ord[s1]==2){
                if(i-pos[s1]>1){
                flag=true;
                break;
                }
                else 
                ord[s1]--;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}