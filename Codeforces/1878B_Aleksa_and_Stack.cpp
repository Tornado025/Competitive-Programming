#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        int a=1;
        for(int i=1;i<=n;i++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<"\n";
    }
}