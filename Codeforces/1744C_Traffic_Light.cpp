#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;char ch;cin>>n>>ch;
        string s;cin>>s;
        if(ch=='g'){
            cout<<"0"<<"\n";
        }
        else{
        int maxi=0;
        s=s+s;
        for(int i=0;i<(2*n);i++){
            if(s[i]==ch){
                int d=0;
                while(s[i]=='y'||s[i]=='r'){
                    i++;
                    d++;
                }
                maxi=max(maxi,d);
                d=0;
                if(i>n)break;
            }
        }
        cout<<maxi<<"\n";
        }
    }
}