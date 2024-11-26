#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
        int n;cin>>n;int sum=0;
        while(n!=0){
            if((n%10==4)||(n%10==7))sum++;
            n/=10;
        }
        if(sum==4||sum==7)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        }