#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,m;
        cin >> n>>x>>m;
        int l=x;int r=x;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin >> a >> b;
            if(max(a,l)<=min(b,r)){
                l=min(l,a);
                r=max(r,b);
            }
        }
        cout << r-l+1<<"\n";
    }
    return 0;
}