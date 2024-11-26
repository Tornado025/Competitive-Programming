#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    if(n%2!=0)cout<<"-1"<<"\n";
    else{
        for(int i=2;i<=n;i+=2)cout<<i<<" "<<(i-1)<<" ";
        cout<<"\n";
    }
}