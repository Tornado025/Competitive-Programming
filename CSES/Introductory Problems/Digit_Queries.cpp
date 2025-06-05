#include <bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int d=1;int a=9;
        if(n<=9)cout<<n<<"\n";
        else{
            while(d*a<n){
                n-=d*a;
                d++;
                a*=10;
            }
            int ans=a/9+(n-1)/d;
            string s=to_string(ans);
            cout<<s[(n-1)%d]<<"\n";
        }
    }
}