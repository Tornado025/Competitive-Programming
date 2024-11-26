#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b,c;cin>>a>>b>>c;
            int d=abs(2*b)-a;int e=abs(2*b)-c;int f=abs(a+c)/2;
            if(d%c==0&&d>=c&&d!=0)cout<<"YES"<<"\n";
            else if(e%a==0&&e>=a&&e!=0)cout<<"YES"<<"\n";
            else if(f%b==0&&abs(a+c)%2==0&f>=b&&f!=0)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
    }
}