#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isprime(int n){
    if(n==1)return true;
    for(int i=2;(i*i)<n;i++)
    if(n%i==0)return false;
    return true;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int d=(int)sqrt(n);
        if(isprime(n)==true&&(d*d==n))cout<<"-1"<<"\n";
        else{
            bool flag=false;
            for(int i=2;(i*i)<n;i++){
                if(n%i==0&&(n!=(n/i))){
                    cout<<"1 "<<i<<" "<<(n/i)<<"\n";
                    flag=true;
                    break;
                } 
            }
            if(flag==false)cout<<"-1"<<"\n";
        }
    }
}