#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        int max1=0,max2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0)
            max1=max(max1,arr[i]);
            else 
            max2=max(arr[i],max2);
        }
        if(max1>=max2)cout<<(max1+n-n/2)<<"\n";
        else cout<<(max2+n/2)<<"\n";
    }
}