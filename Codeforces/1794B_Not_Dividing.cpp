#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)arr[i]++;
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]%arr[i]==0)arr[i+1]++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}