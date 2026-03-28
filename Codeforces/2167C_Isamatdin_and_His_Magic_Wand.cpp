#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define MOD 1000000007
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;
        int arr[n];
        int d=0;int e=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)d=1;
            else e=1;
        }
        if(d==1&&e==1)sort(arr,arr+n);
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<"\n";
    }
}