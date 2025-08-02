#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        if(l==r)cout<<l<<"\n";
        else{
            for(int i=1;;i*=2){
                if((l|i)>r)break;
                l|=i;
            }
            cout<<l<<"\n";
        }
    }
}