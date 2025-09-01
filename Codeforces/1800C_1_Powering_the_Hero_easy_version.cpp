#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans=0;priority_queue<int>pq;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                if(!pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                }
            }
            else {
                pq.push(arr[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}