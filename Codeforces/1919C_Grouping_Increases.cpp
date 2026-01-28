#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int a=1e9+7;int b=1e9+7;
        int ans=0;
        for(int i=0;i<n;i++){
            if(a>b)swap(a,b);
            if(arr[i]<=a)a=arr[i];
            else if(arr[i]<=b)b=arr[i];
            else{
                ans++;
                a=arr[i];
            }
        }
        cout << ans << endl;
    }
}