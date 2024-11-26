#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)arr[i]=0;
        int i=0;
        for(int j=1;j<=n;j+=2){
            int d=j;
            while(d<=n){
                arr[i]=d;
                d*=2;
                i++;
            }
        }
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<"\n";
    }
}