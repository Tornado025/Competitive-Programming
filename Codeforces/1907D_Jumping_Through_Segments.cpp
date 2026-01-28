#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first >> arr[i].second;
        }
        int l=-1,r=1e9+7;
        while (r-l>1) {
            int mid = (l+r)/ 2;
            bool flag=true;
            int d=0,e=0;
            for(int i=0;i<n;i++){
                d=max(d-mid,arr[i].first);
                e=min(e+mid,arr[i].second);
                if(d>e){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                r=mid;
            }
            else{
                l=mid ;           }
            //cout << r << endl;
        }
        cout << r << endl;
    }
}