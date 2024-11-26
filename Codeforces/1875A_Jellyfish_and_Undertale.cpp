#include <bits/stdc++.h>
//#define int long long int
using namespace std;

int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        long long a,b,n;cin>>a>>b>>n;long long arr[n];
        long long sum=b;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(a==1)cout<<b<<endl;
        else{
        for(int i=0;i<n;i++){
            if(arr[i]>=a)sum+=a-1;
            else sum+=arr[i];
        }
        cout<<sum<<endl;
    }}
}