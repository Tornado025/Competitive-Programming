#include <iostream>
using namespace std;
int main(){
    const long long a=1e9+7;
    int t;cin>>t;
    for(int i=1;i<=t;i++){
       long long n,ans; cin>>n;
       ans=(n*(n+1))%a; ans=ans*(4*n-1)%a; ans=(ans*(2022/6))%a;
       cout<<ans<<endl;
    }
}