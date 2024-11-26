#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b;cin>>a>>b;
        int c=a*1+b*2;
        if(c%2!=0)cout<<"NO"<<"\n";
        else if((c/2)%2!=0&&a<2)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}