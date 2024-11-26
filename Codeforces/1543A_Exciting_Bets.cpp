#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b;cin>>a>>b;
        if(a==b)cout<<"0 0"<<"\n";
        else {
            int d=abs(a-b);
            int e=min(a%d,d-a%d);
            cout<<d<<" "<<e<<"\n";
        }
    }
}