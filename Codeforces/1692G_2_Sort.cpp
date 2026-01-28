#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    std::ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int ans=0;int ct=1;
        for(int i=1;i<n;i++){
            if(arr[i-1]<2*arr[i])ct++;
            else ct=1;
            if(ct>k)ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}