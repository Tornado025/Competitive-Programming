#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int a,b,c;cin>>a>>b>>c;
        int d=0;vector <int> e;
        if(c!=1){
            cout<<"YES"<<"\n";
            cout<<a<<"\n";
            for(int i=1;i<=a;i++)cout<<"1"<<" ";
            cout<<"\n";
        }
        else if(c==1){
            if(a%2==0&&b>1){
                cout<<"YES"<<"\n";
                cout<<a/2<<"\n";
                for(int i=1;i<=a/2;i++)cout<<"2"<<" ";
                cout<<"\n";
            }
            else if(a%2!=0&&b>2){
                cout<<"YES"<<"\n";
                cout<<a/2<<"\n";
                int d=a-3;
                cout<<"3"<<" ";
                for(int i=1;i<=d/2;i++)cout<<"2"<<" ";
                cout<<"\n";
            }
            else
                cout<<"NO"<<"\n";
        }
        
    }
}