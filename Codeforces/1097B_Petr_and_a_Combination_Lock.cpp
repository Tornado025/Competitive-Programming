#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int arr[n];int m=1<<n;
    for(int i=0;i<n;i++)cin>>arr[i];
    bool flag=false;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if((1<<j)&i)sum+=arr[j];
            else sum-=arr[j];
        }
        if(sum%360==0){
            flag=true;
            break;
        }
    }
    if(flag==false)cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
}