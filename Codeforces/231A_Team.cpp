#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n][3];int f;
    for(int i=0;i<n;i++){int d=0;
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(a[i][j]==1)d++;
        }
        if(d>=2)f++;
    }
    cout<<f;
}