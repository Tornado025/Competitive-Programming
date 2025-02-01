#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];int arr1[n+1];int arr2[n+1];
        for(int i=0;i<=n;i++){
            arr1[i]=0;arr2[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=n)arr1[arr[i]]++;
        } 
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                arr2[j]+=arr1[i];
            }
        }
        sort(arr2,arr2+(n+1));
        cout<<arr2[n]<<"\n";
    }
}