#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n,x,y;cin>>n>>x>>y;
        int d=min(x,y);
        if(n%d==0)cout<<(n/d)<<"\n";
        else cout<<(n/d)+1<<"\n";
    }
}