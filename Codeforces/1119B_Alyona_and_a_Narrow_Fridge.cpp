#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int n,k;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l=1,r=n;int ans=0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        vector<int>arr1;
        for(int i=0;i<mid;i++)arr1.push_back(arr[i]);
        sort(arr1.begin(), arr1.end(), greater<int>());
        int sum=0;
        for(int i=0;i<mid;i+=2)sum+=arr1[i];
        if(sum<=k){
            ans=mid,l=mid+1;
        }
        else r=mid-1;
    }
    cout << ans << endl;
    return 0;
}