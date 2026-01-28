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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<31;j++){
                if(arr[i]&(1<<j))mp[j]++;
            }
        }
        int gcd1=mp[0];
        for(int i=1;i<31;i++){
            gcd1=gcd(gcd1,mp[i]);
        }
        if(gcd1==0){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<"\n";
            continue;
        }
        for(int i=1;i<=n;i++){
            if(gcd1%i==0)
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}