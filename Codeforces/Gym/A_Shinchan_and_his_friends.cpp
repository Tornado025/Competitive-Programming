#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        int x,y;cin>>x>>y;
        bool flag=false;
        for(int i=0;i<k;i++){
            int a,b;cin>>a>>b;
            if(((x+y)%2)==((a+b)%2))flag=true;
            else continue;
        }
        if(flag==true)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}