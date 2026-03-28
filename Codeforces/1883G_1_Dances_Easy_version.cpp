#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr1[n];arr1[0]=1;
        for (int i = 1; i < n; i++) {
            cin >> arr1[i];
        }
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);sort(arr1, arr1 + n);
        int j=0;
        for(int i=0;i<n;i++){
            if(arr1[j]<arr[i]){
                j++;
            }
        }
        cout<<n-j<<endl;
    }
    return 0;
}