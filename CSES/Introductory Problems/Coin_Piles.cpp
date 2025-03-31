#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(((2*x-y)>=0&&((2*x-y)%3==0))&&(2*y-x>=0&&((2*y-x)%3==0)))cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}