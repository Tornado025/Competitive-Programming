#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
        int n,m,a,b;cin>>n>>m>>a>>b;
        if(m>n||m==0||a==0||b==0)cout<<n*a<<"\n";
        else if((a*m)<b)cout<<n*a<<"\n";
        else cout<<(n/m)*b+(n%m)*a<<"\n";
}