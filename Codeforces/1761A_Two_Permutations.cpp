#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b;cin>>n>>a>>b;
        if((n==a&&n==b)||(a+b+1)<n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}