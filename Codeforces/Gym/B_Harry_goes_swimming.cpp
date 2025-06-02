#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int k,a,b,c;cin>>k>>a>>b>>c;
        if(k%c==0||k%a==0||k%b==0)cout<<"0"<<"\n";
        else {
            int d=min(abs(a-(k%a)),min(abs(b-(k%b)),abs(c-(k%c))));
            if(k<a)d=min(d,a-k);
            if(k<b)d=min(d,b-k);
            if(k<c)d=min(d,c-k);
            cout<<d<<"\n";
        }
    }
}