#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int b;cin>>b;
        if(b%3==0)cout<< "Second";
        else cout<<"First";
        cout<<"\n";
    }
}