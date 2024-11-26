#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b,c;cin>>a>>b>>c;
        int d;
        if(c%2==0)d=c/2;
        else d=c/2+1;
        if((a+d)>(b+(c/2)))cout<<"First";
        else cout<<"Second";
        cout<<"\n";
    }
}