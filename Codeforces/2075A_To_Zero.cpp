#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int d=0;
        if(n%2!=0){
            d=1;
            n-=k;
            k--;
            d+=(n/k);
            if(n%k==0)cout<<d<<"\n";
            else cout<<d+1<<"\n";
        }
        else{
            k--;
            d=(n/k);
            if(n%k==0)cout<<d<<"\n";
            else cout<<d+1<<"\n";
        }
    }
}