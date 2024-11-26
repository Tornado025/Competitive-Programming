#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;int amt;
    for(int i=1;i<=w;i++)amt+=i*k;
    if(amt>n)cout<<(amt-n)<<"\n";
    else cout<<"0"<<"\n";
}