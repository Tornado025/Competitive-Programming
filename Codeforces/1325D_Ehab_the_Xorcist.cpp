#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int x,y;cin>>x>>y;
    if(x%2!=y%2||x>y)cout<<"-1"<<"\n";
    else {
        if(x==y){
            if(x==0)cout<<"0"<<"\n";
            else{
                cout<<"1"<<"\n";
                cout<<x<<"\n";
            } 
        }
        else{
            int z=(y-x)/2;
            if(x&z) cout<<"3"<<"\n"<<z<<" "<<z<<" "<<x<<"\n";
            else cout<<"2"<<"\n"<<z<<" "<<(x^z)<<"\n";
        }
    }
}