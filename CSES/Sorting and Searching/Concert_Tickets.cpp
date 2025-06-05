#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,m;cin>>n>>m;
    multiset<int>t;
    vector<int> arr1(n);vector<int> arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        t.insert(arr1[i]);
    }
    sort(arr1.begin(),arr1.end());
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        auto d=t.upper_bound(arr2[i]);
        if(d==t.begin())cout<<"-1"<<"\n";
        else {
            cout<<*(--d)<<"\n";
            t.erase(d);
        }
    }
}