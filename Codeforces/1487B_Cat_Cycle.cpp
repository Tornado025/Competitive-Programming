#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        if(n%2==0){
            if(k%n==0)cout<<n<<"\n";
            else cout<<k%n<<"\n";
        }
        else{
            k--;
            int d=(k+k/(n/2))%n+1;
            if(d==0)cout<<n<<"\n";
            else cout<<d<<"\n";
        }
    }
}