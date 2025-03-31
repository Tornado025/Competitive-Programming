#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    if(n<5)cout<<"0"<<"\n";
    else{
        int d=0;
        for(int i=5;i<=n;i+=5){
            int a=i;
            while(a%5==0){
                a/=5;d++;
            }
        }
        cout<<d<<"\n";
    }
}