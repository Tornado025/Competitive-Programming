#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t sod(int n){
    int ans=0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }   
    return ans;
}

int32_t main() {
    int pref[200005];	
    pref[0]=0;
    for(int i=1;i<=200000;i++){
        pref[i]=pref[i-1]+sod(i);
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<pref[n]<<"\n";
    }
    return 0;
}