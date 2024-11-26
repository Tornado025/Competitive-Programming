#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        if(n<10)cout<<n<<endl;
        else{
            int d=0;
            for(int i=2;i<10;i++){
                int c=n/pow(10,i);
                if(c==0){
                    d=i-1;
                    break;
                }
            }
            int e=d-1;d=(n/pow(10,d))-1;
            int f=10+e*9+d;
            cout<<f<<endl;
        }
    }
}