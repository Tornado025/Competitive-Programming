#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s1,s2;
        cin>>s1>>s2;
        int ct1=0;int ct2=0;
        for(int i=0;i<s1.length();i++){
            if(i%2!=0){
                if(s1[i]=='0')ct1++;
                if(s2[i]=='0')ct2++;
            }
            else{
                if(s1[i]=='0')ct2++;
                if(s2[i]=='0')ct1++;
            }
        }
        if(ct1>=n/2&&ct2>=(n+1)/2)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}