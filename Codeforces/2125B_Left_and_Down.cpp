#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        if(c>a&&c>b)cout<<"1"<<"\n";
        else{
            if(a==b)cout<<"1"<<"\n";
            else {
                int d=gcd(a,b);
                int e=max(a,b)/gcd(a,b);
                int f=min(a,b)/gcd(a,b);
                if(e<=c&&f<=c)cout<<"1"<<"\n";
                else cout<<"2"<<"\n";
            }
        }
    }
}