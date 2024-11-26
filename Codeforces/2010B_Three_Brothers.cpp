#include <iostream>
using namespace std;
int main(){
    int arr[3];for(int i=0;i<3;i++)arr[i]=i+1;
    int d,e;cin>>d>>e;
    for(int i=0;i<3;i++){
        if(d==arr[i]||e==arr[i])continue;
        else cout<<(i+1)<<"\n";
    }
}