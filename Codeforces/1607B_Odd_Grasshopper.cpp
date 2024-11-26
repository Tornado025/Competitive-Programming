#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b;cin>>a>>b;
        int d=0;
            if(b%4==1)d=-b;
            else if(b%4==2)d=1;
            else if(b%4==3)d=b+1;
            if(a%2!=0)d=0-d;
        cout<<(a+d)<<"\n";
    }
}