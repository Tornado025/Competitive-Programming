#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        if(n%2==0)cout<<(n/2)<<" "<<(n/2)<<"\n";
        else{
            int a=0,b=0;bool flag=false;
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    a=n/i;b=a*(i-1);
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                a=1;b=n-1;
            }
            cout<<a<<" "<<b<<"\n";
        }
    }
}