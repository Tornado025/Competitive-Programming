#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0)n/=2;
        else n=3*n+1;
    }
    cout<<1<<"\n";
}