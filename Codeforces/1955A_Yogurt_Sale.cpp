#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b,c;cin>>a>>b>>c;
        if(2*b<=c)cout<<(a*b)<<"\n";
        else{
            if(a%2==0)cout<<((a/2)*c)<<"\n";
            else cout<<((a/2)*c)+b<<"\n";
        }
    }
}