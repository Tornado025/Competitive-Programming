#include <iostream>
using namespace std;
int main(){
    int b;cin>>b;int x;
    for(int i=1;i<=b;i++){
        string d;cin>>d;
        for(int i=0;i<2;i++){
            if(d.substr(i,i+2)=="++")x++;
            else if(d.substr(i,i+2)=="--")x--;
        }
    }
    cout<<x;
}