#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int i=0,j=1;bool flag=false;
        while(i<n&&j<n){
            if(arr[i]+k==arr[j]){
                flag=true;
                break;
            }
            else if(arr[i]+k<arr[j])i++;
            else j++;
        }
        if(n==1&&arr[0]==k)cout<<"YES"<<"\n";
        else if(flag)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}