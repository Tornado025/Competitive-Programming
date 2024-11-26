#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr1[n+1];int arr2[n+1];
        for(int i=1;i<=n;i++)cin>>arr1[i];
        for(int i=1;i<=n;i++)cin>>arr2[i];
        vector<int>arr3(2*n+1);
        vector<int>arr4(2*n+1);
        int p=1;
        for(int i=2;i<=n;i++){
            if(arr1[i]!=arr1[i-1]){
                arr3[arr1[i-1]]=max(arr3[arr1[i-1]],i-p);
                p=i;
            }
        }
        arr3[arr1[n]]=max(arr3[arr1[n]],n-p+1);
        p=1;
        for(int i=2;i<=n;i++){
            if(arr2[i]!=arr2[i-1]){
                arr4[arr2[i-1]]=max(arr4[arr2[i-1]],i-p);
                p=i;
            }
        }
        arr4[arr2[n]]=max(arr4[arr2[n]],n-p+1);
        int maxi=0;
        for(int i=1;i<=2*n;i++)
        maxi=max(maxi,arr3[i]+arr4[i]);
        cout<<maxi<<"\n";
    }
}