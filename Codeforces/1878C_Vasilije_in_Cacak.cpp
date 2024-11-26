#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        long long n,a,b;cin>>n>>a>>b;
        long long min=(a*(a+1))/2;
        long long max=(n*(n+1))/2-((n-a+1)*(n-a))/2;
        if(b<=max&&b>=min)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
}}
