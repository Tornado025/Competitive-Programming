#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int ans=100000000009,d=0;
        if(a==b)cout<<"2"<<"\n";
        else{
        for(int i=0;i<=30;i++){
            int c=b+i;
            if(c==1)continue;
            else if(a==c){
                    ans=min(ans,i+2);
                    break;
                }
            else{
                int copy=a;
                while(copy!=0){
                    d++;
                    copy/=c;
                }
                ans=min(ans,(d+i));
                d=0;
            }
        }
        cout<<ans<<"\n";
        }
    }
}