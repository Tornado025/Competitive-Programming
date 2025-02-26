#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr1[n];int arr2[n];int arr3[n];
        multiset<int>arr;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            arr.insert(arr1[i]);
        }
        for(int i=0;i<n;i++)cin>>arr2[i];
        for(int i=0;i<n;i++)cin>>arr3[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        sort(arr3,arr3+n,greater<int>());
        int arr4[n];
        for(int i=0;i<n;i++){
            auto d=arr.lower_bound(arr2[i]);
            d--;
            arr4[i]=arr2[i]-(*d);
            arr.erase(d);
        }
        sort(arr4,arr4+n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(arr4[i]*arr3[i]);
        }
        cout<<sum<<"\n";
    }
}