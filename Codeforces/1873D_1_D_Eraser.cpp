#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        string s;cin>>s;
        int d=0;
        for(int i=0;i<a;i++){
            if(s[i]=='B'){
                d++;
                i+=(b-1);
            }
        }
        cout<<d<<"\n";
    }
}