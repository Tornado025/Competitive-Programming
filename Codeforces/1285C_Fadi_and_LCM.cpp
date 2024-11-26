#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
        int n;cin>>n;int d=0;int maxi=0;
        for(int i=sqrt(n);i>=0;i--){
            if((i*n/i)/gcd(i,n/i)==n&&n%i==0){
                d=n/i;
                maxi=max(maxi,d);
                break;
            }
        }
        cout<<d<<" "<<(n/d)<<"\n";
}