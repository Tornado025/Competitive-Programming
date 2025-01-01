#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t calc(int n){
    int d=0;
    d+=(n/15);
    n%=15;
    d+=(n/6);
    n%=6;
    d+=(n/3);
    n%=3;
    d+=n;
    return d;
}
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        int sum=0;
        if(sum<10)
        cout<<calc(n)<<"\n";
        else if(sum<20)
            cout<<min(calc(n),calc(n-10)+1)<<"\n";
        else
            cout<<min(calc(n),calc(n-10)+1,calc(n-20)+2)<<"\n";
    }
}