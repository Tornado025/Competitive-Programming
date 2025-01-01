#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int d=0;
        if(a<b){
        while(a<b){
            a*=2;
            d++;
        }
        if(a>b||b%2!=0)cout<<"-1"<<"\n";
        else cout<<(d/3)+((d%3)/2)+((d%3)%2)<<"\n";
        }
        else if(a>b){
            bool flag=true;
            while(a>b){
                if(a!=b&&a%2!=0){
                    flag=false;
                    break;
                }
                a/=2;
                d++;
            }
        if(a<b||flag==false)cout<<"-1"<<"\n";
        else cout<<(d/3)+((d%3)/2)+((d%3)%2)<<"\n";
        }
        else cout<<"0"<<"\n";
    }
}