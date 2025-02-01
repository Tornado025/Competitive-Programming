#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag=true;
        for(int i=1;i<n;i++)if(arr[i]%arr[0]!=0)flag=false;
        if(flag)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}