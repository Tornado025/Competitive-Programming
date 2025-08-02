#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    if(n>77774444)cout<<"4444477777"<<"\n";
    else{
        while(true){
            int ct1=0;int ct2=0;int d=n;
            while(d>0){
                if(d%10!=4&&d%10!=7)break;
                else if(d%10==4)ct1++;
                else if(d%10==7)ct2++;
                d/=10;
            }
            if(ct1==ct2&&d==0){
                cout<<n<<"\n";
                break;
            }
            else n++;
        }
    }
}