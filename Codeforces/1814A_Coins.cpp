#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        long long n,k;cin>>n>>k;
        if(n<2&&k!=1)cout<<"NO"<<"\n";
        else{
            if(k%2==0&&n%2!=0)cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
        }
    }
}