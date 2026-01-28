#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for(int i=n;i>=1;i--)a.push_back(i);
        a.push_back(n);
        for(int i=1;i<n;i++)a.push_back(i);
        for(int i=0;i<2*n;i++)cout<<a[i]<<" ";
        cout<<"\n";
        
    }
    return 0;
}