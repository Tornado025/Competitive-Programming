#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int n; cin >> n;
    int arr1[n];int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr1[i]--;
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        arr2[i]--;
    }
    map<int,int>pos;int over[n];
    for(int i=0;i<n;i++)pos[arr2[i]]=i;
    for(int i=0;i<n;i++){
        over[i]=pos[arr1[i]];
    }
    int max=-1e9;int ans=0;
    for(int i=0;i<n;i++){
        if(over[i]>max)max=over[i];
        else ans++;
    }
    cout << ans << endl;
    return 0;
}