#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b,c,d;cin>>a>>b>>c>>d;
        if(b>d)cout<<"-1"<<endl;
        else {
            int e=0;
            while(b<d){
                a++;
                b++;
                e++;
            }
            if(a<c)cout<<"-1"<<endl;
            else{
                e+=abs(a-c);cout<<e<<endl;
            }
        }
    }
}