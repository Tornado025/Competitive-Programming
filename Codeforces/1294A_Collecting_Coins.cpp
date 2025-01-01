#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
int t;cin>>t;
for(int m=1;m<=t;m++) {
int a,b,c,n;cin>>a>>b>>c>>n;
int maxi=max(a, max(b, c)) ;
n=n-((3*maxi)-(a+b+c)) ;
if(n>=0&&n%3==0) 
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";
}}