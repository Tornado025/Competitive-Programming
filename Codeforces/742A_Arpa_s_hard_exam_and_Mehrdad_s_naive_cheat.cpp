#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    if(n==0)cout<<"1"<<"\n";
    else{
    int z=n%4;
    if(z==0)cout<<"6"<<"\n";
    else if(z==1)cout<<"8"<<"\n";
    else if(z==2)cout<<"4"<<"\n";
    else if(z==3)cout<<"2"<<"\n";
    }
}