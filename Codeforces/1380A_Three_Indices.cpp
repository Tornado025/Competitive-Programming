#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        int maxi=0;int d=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>maxi){
                maxi=arr[i];
                d=i+1;
            }
        }
        if(d>1&&d<n)cout<<"YES\n"<<(d-1)<<" "<<d<<" "<<(d+1)<<"\n";
        else{
            bool flag=false;
            for(int i=1;i<n-1;i++){
                if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
                    cout<<"YES\n"<<i<<" "<<i+1<<" "<<(i+2)<<"\n";
                    flag=true;
                    break;
                }
            }if(flag==false)cout<<"NO"<<"\n";
        } 
    }
}