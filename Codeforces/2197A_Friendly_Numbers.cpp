#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t sod(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;int ct=0;
        for(int i=1;i<=100;i++){
            if(sod(i+n)==i){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}