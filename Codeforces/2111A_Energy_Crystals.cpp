#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int d=(int)log2(n);
        cout<<(d+1)*2+1<<"\n";
    }
}