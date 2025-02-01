#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
        int n,q;cin>>n>>q;vector<int> arr(n);
        int p=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        while(q--){
            cin>>p;
            int d=find(arr.begin(),arr.end(),p)-arr.begin();
            cout<<(d+1)<<" ";
            rotate(arr.begin(),arr.begin()+d,arr.begin()+d+1);
        }
        cout<<"\n";
    }
