#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;int ct=0;
        cin >> n;
        for(int i=0;i<60;i++){
            if(n&(1ll<<i)){
                //cout<<i<<" ";
                ct++;
            }
        }
        cout << 2*n-ct << endl;
    }
    return 0;
}