#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(long long i=1;i<=t;i++){
        long long n;cin>>n;long long d=0;long long k=1;
        if(n==1)d=0;
        else{
            n--;
        while(n>0){
            d=d+n*k*2;
            k++;
            n--;
        }
        
    }
    cout<<d<<endl;
}}