#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        long long a,b;cin>>a>>b;
        long long d=1;long long e=1;
        while(a<=b){
            if((a+d)>b)break;
            a+=d;
            d++;
            e++;
        }
        cout<<e<<endl;
    }
}