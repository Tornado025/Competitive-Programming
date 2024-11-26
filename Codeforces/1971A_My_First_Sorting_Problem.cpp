#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int x,y;cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<"\n";
    }
}
