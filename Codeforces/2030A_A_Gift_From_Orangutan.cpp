#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        //swap(arr[0],arr[n-1]);
        //swap(arr[1],arr[n-1]);
        /*int arr2[n];int arr3[n];
        arr2[0]=arr[0];arr3[0]=arr[0];
        for(int i=1;i<n;i++){
            arr2[i]=mini;
            arr3[i]=maxi;
        }*/
        cout<<(arr[n-1]-arr[0])*(n-1)<<"\n";
    }
}