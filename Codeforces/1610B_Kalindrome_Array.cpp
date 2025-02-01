#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool check(int arr[],int o,int l){
    int b[l];int m=0;
    for(int i=0;i<l;i++){
        if(arr[i]!=o){
            b[m]=arr[i];
            m++;
        }
    }
    for(int i=0;i<m;i++){
        if(b[i]!=b[m-i-1])return false;
    }
    return true;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[n-i-1]){
                flag=false;
                bool flag1=check(arr,arr[i],n);
                bool flag2=check(arr,arr[n-i-1],n);
                flag=flag1|flag2;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}