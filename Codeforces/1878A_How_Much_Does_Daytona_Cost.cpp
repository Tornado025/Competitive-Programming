#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n,k;cin>>n>>k;int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]==k){cout<<"Yes"<<"\n";flag=true;break;}
        }
        if(flag==false)
        cout<<"NO"<<"\n";
    }
}