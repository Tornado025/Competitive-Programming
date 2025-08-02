#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,k;cin>>n>>k;
    if(n<k)cout<<"-1"<<"\n";
    else{
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                k--;
                if(k==0){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
        for(int i=sqrt(n);i>=1;i--){
            if(n%i==0){
                if(i==sqrt(n))continue;
                k--;
                if(k==0){
                    cout<<n/i<<"\n";
                    break;
                }
            }
        }
        if(k>0)cout<<"-1"<<"\n";
    }
}