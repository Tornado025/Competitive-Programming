#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        long long n;cin>>n;
        long long maxi=0;
        for(int i=1;i<=n;i++){
            if(n%i!=0)break;
            maxi++;
        }
        cout<<maxi<<"\n";
    }
}