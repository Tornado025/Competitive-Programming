#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;string s;cin>>n>>s;
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            flag=true;
            cout<<"YES"<<"\n"<<(i+1)<<" "<<(i+2)<<"\n";
            break;
        }
    }
    if(flag==false)cout<<"NO"<<"\n";
}