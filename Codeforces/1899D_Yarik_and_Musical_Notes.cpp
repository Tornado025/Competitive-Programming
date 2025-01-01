#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        map<int,int>ord;
        int d=0;
        for(int i=0;i<n;i++){
            d+=ord[arr[i]];
            if(arr[i]==1)d+=ord[2];
            else if(arr[i]==2)d+=ord[1];
            ord[arr[i]]++;
        }
        cout<<d<<"\n";
    }
}