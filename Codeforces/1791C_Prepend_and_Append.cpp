#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        string s;cin>>s;
        while(s.length()>2&&s.at(0)!=s.at(s.length()-1))
        s=s.substr(1,s.length()-2);
        if(s=="1"||s=="0")cout<<"1"<<endl;
        else if(s=="10"||s=="01")cout<<"0"<<endl;
        else if(s=="11")cout<<"2"<<endl;
        else cout<<s.length()<<endl;
        }
}