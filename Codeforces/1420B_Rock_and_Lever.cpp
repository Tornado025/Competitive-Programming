#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int ct=0;int d=0;
        for(int i=30;i>=0;i--){
            for(int j=0;j<n;j++){
                if(arr[j]>=(1<<i)&&arr[j]<(1<<(i+1)))ct++;
            }
            d+=((ct)*(ct-1)/2);
            ct=0;
        }
        cout<<d<<"\n";
    }
}