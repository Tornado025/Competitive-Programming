#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        int arr[k];int maxi=0;int mini=1000000007;int ct1=0;
        for (int i = 0; i < k; i++) {
            cin >> arr[i];
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
            if(arr[i]==1)ct1++;
        }
        if(ct1>1)cout<<"1"<<"\n";
        else if(maxi==arr[k-1]&&mini==arr[0])cout<<n-maxi+1<<"\n";
        else cout<<"1"<<"\n";
    }
    return 0;
}
