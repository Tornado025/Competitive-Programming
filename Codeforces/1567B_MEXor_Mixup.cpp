#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int c=0;
        if(a%4==1)c=a-1;
        else if(a%4==2)c=1;
        else if(a%4==3)c=a;
        else c=0;
        if(c==b)cout<<a<<"\n";
        else if((c^b)!=a)cout<<a+1<<"\n";
        else cout<<(a+2)<<"\n";
    }
}   