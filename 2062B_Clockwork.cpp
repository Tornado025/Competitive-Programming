#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]<=(n-i-1)*2){
                flag=false;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]<=(i)*2){
                flag=false;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}