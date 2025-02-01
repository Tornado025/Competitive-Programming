#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s="";
        char ch;
        for(int i=0;i<64;i++){
            cin>>ch;
            if(ch>='a'&&ch<='z')s+=ch;
        }
        cout<<s<<"\n";
    }
}