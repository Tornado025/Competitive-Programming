#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++)
    if(n%i==0)return false;
    return true;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int d;cin>>d;
        int a=d+1;
        while(isprime(a)==false)a++;
        int b=a+d;
        while(isprime(b)==false)b++;
        cout<<(a*b)<<"\n";
    }
}