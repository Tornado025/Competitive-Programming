#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int d=a/2+a/3+a/5+a/7-a/6-a/10-a/14-a/15-a/21-a/35+a/30+a/42+a/70+a/105-a/210;
        int e=b/2+b/3+b/5+b/7-b/6-b/10-b/14-b/15-b/21-b/35+b/30+b/42+b/70+b/105-b/210;
        int c=0;
        if(a%2!=0&&a%3!=0&&a%5!=0&&a%7!=0)c++;
        cout<<(b-a)-(e-d)+c<<"\n";
    }
}