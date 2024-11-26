#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;int a=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
            a=n/i;
            break;
            }
        }
        cout<<a<<" "<<(n-a)<<"\n";
    }    
}