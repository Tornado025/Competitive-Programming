#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,d;cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    int f=0;
    for(int i=0;i<n;i++){
        int e=arr[i];
        while(e<=d){
            e+=arr[i];
            n--;
            if(i==n)break;
        }
        if(i==n)break;
        else f++;
    }   
    cout<<f<<"\n";
}