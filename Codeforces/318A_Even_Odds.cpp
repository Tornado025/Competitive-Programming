#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,k;cin>>n>>k;
    if(n%2!=0)n++;
    if((n/2)<k)cout<<2*(k-(n/2))<<"\n";
    else cout<<2*k-1<<"\n";
}