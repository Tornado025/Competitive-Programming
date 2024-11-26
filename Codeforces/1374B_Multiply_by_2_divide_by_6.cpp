#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int d=0;int e=0;
        while(n%2==0){
            e++;
            n/=2;
        }
        while(n>1){
            if(n%3!=0){
                d=-1;
                break;
            }
            else {n/=3;d++;}
        }
        if(d==-1||d<e)cout<<"-1"<<"\n";
        else cout<<d+d-e<<"\n";
    }
}