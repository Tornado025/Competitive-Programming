#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];int arr1[n];
        vector<int>arr2;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            if(arr1[i]==0)arr2.push_back(arr[i]);
        }
        sort(arr2.rbegin(),arr2.rend());
        int d=0;
        for(int i=0;i<n;i++){
            if(arr1[i]==0)cout<<arr2[d++]<<" ";
            else cout<<arr[i]<<" ";
        }
        cout<<"\n";
}}