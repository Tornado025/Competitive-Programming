#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,ans=1;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<=20;i++){
            int p=0;
            for(int j=1;j<=n;j++){
                if((arr[j]>>i)&1){
                    ans=max(ans,j-p);p=j;
                }
            }
            if(p)ans=max(ans,n+1-p);
        }
        cout<<ans<<endl;
    }
    return 0;
}