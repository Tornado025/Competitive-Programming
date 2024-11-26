#include <bits/stdc++.h>
using namespace std;
bool checkprime(int n){
    for(int i=2;i<n;i++)if(n%i==0)return false;
    return true;
}
int main(){
    int n,m;cin>>n>>m;
    if(checkprime(m)==true&&checkprime(n)==true){
        bool flag=true;
    for(int i=n+1;i<m;i++){
        if(checkprime(i)==true){
            flag=false;
            break;
        }
    }
        if(flag==true)cout<<"YES"<<"\n";else cout<<"NO"<<"\n";
    }
    else cout<<"NO"<<"\n";
}