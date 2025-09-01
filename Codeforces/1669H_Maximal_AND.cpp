#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int arr1[31];
        for(int i=0;i<31;i++)arr1[i]=0;
        for(int i=0;i<n;i++){
            for(int j=30;j>=0;j--){
                if(arr[i]&(1<<j))arr1[j]++;
            }
        }
        int ans=0;
        for(int i=30;i>=0;i--){
            if((n-arr1[i])-k<=0)k-=(n-arr1[i]),ans+=1<<i;
        }
        cout<<ans<<"\n";
    }
    return 0;
}