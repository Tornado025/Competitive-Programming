#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int n,q; cin >> n>>q;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    while(q--) {
        int x; cin >> x;
        int ans = upper_bound(arr, arr+n, x) - arr;
        cout << ans << " ";
    }
    return 0;
}