#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t gcd(int a,int b){
    if(a==0)return b;
    else return gcd(b%a,a);
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,x,y;cin>>n>>x>>y;
        int d=n/x;int e=n/y;int f=n*gcd(x,y)/(x*y);
        d-=f;e-=f;
        int a=e*(e+1)/2;
        int b=n*(n+1)/2-(n-d+1)*(n-d)/2;
        cout<<(b-a)<<"\n";
    }
}