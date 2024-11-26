#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        long double x,y,k;cin>>x>>y>>k;
        long double a=x/k;long double b=y/k;
        long long c=ceil(a);long long d=ceil(b);
        if(c>d)cout<<2*c-1<<endl;
        else cout<<2*d<<endl;
    }
}