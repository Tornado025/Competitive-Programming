#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 1e9 + 7;
int32_t main()
{
    int n;
    cin >> n;
    int a=1,b=0;
    for(int i=1;i<=n;i++)
    {
        int c=(b*3)%mod;
        int d=(b*2+a)%mod;
        a=c;
        b=d;
    }
    cout<<a%mod<<"\n";
    return 0;
}