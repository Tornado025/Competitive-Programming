#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b,c;cin>>a>>b>>c;
        if(abs(b-c)%2==0)cout<<"1 ";else cout<<"0 ";
        if(abs(a-c)%2==0)cout<<"1 ";else cout<<"0 ";
        if(abs(b-a)%2==0)cout<<"1 ";else cout<<"0 ";
        cout<<"\n";
    }
}