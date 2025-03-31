#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    if(n<=3&&n>1)cout<<"NO SOLUTION"<<"\n";
    else{
        for(int i=2;i<=n;i+=2)cout<<i<<" ";
        for(int i=1;i<=n;i+=2)cout<<i<<" ";
    }
}
