#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];bool arr[1025]={false};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            arr[a[i]] = true;
        }
        int ans = 0;bool flag1=false;
        for(int i = 1; i < 1024; i++) {
            bool flag=true;
            for(int j = 0; j < n; j++) {
                if(arr[i^a[j]] == false) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                ans=i;
                flag1=true;
                break;
            }
        }
        if(flag1==false) ans = -1;
        cout << ans << endl;
    }
    return 0;
}