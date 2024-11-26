#include <iostream>
using namespace std;
int main(){
    string a;cin>>a;
    string b="heidi";
    for(int i=0,j=0;i<a.length();i++){
        if(a.at(i)==b.at(j))j++;
        if(j==b.length()){cout<<"YES"<<"\n";return 0;}
    }
    cout<<"NO"<<"\n"    ;
}