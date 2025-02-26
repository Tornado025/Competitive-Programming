#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int pref[n];pref[0]=arr[0];
        for(int i=1;i<n;i++)
        pref[i]=pref[i-1]+arr[i];
        bool flag=true;
        if(arr[0]!=1)flag=false;
        for(int i=1;i<n;i++){
            if(arr[i]>pref[i-1]){
                flag=false;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}