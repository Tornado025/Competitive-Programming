#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int ct=0;
    while(n!=0){
        if(n%2==1)ct++;
        n/=2;
    }
    cout<<ct<<"\n";
}