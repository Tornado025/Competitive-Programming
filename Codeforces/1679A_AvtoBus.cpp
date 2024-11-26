#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        if(n%2!=0||n<4)cout<<"-1"<<"\n";
        else{
            if(n%6==0)cout<<(n/6)<<" "<<(n/4)<<"\n"; 
            else cout<<(n/6)+1<<" "<<(n/4)<<"\n"; 
        }
    }
}