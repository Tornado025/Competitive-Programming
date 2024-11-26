#include <iostream>
using namespace std;
int main(){
    int b;cin>>b;string d[b];
    for(int i=0;i<b;i++){
        cin>>d[i];
    }
    for(int i=0;i<b;i++){
        if (d[i].length()<=10)cout<<d[i]<<"\n";
        else cout<<d[i].at(0)<<d[i].length()-2<<d[i].at(d[i].length()-1)<<"\n";
    }
}