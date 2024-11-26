#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        string s="";
        for(int i=1;i<n;i++){
            s=s+'0';
        }
        s=s+'1';
        cout<<s<<"\n";
    }
}