#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        string s;cin>>s;
        int n=s.length();
        if(s[0]==s[n-1])cout<<s<<"\n";
        else cout<<s[0]<<s.substr(1,n-2)<<s[0]<<"\n";
    }
}