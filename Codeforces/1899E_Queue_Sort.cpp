#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];int ind=0;int min=1e18;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<min){
                min=arr[i];
                ind=i;
            }
        }bool flag=true;int d=ind;
        for(int i=ind+1;i<n-1;i++){
            if(arr[i]>arr[i+1]){d=-1;break;}
        }
        cout<<d<<"\n";
    }
}