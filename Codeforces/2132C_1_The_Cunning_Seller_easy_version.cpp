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
        int arr[21];int d=n;
        for(int i=0;i<21;i++)arr[i]=pow(3,i);
        int ans=0;
        for(int i=20;i>=0;i--){
            while(n>=arr[i]){
                ans+=arr[i]*3+arr[i]*i/3;
                n-=arr[i];
            }
        }
        cout<<ans<<"\n";
    }
}