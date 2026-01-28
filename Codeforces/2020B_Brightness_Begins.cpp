#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int l=1;int r=(int)3e18+1;
        while (l<r-1) {
            int mid =  (r + l) / 2;
            int d=mid-int32_t(sqrtl(mid));
            if (d >= n) {
                r = mid ;
            } else {
                l = mid;
            }
        }
        cout << r << endl;
    }
    return 0;
}