#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        while(n%2==0)n/=2;
        if(n==1)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}