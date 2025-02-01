#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int gcd1=arr[0];int gcd2=arr[1];
        for(int i=0;i<n;i++){
            if(i%2==0)
            gcd1=gcd(gcd1,arr[i]);
            else 
            gcd2=gcd(gcd2,arr[i]);
        }
        bool flag1=true;bool flag2=true;
        for(int i=1;i<n;i+=2){
            if(arr[i]%gcd1==0){
                flag1=false;
                break;
            }
        }
        for(int i=0;i<n;i+=2){
            if(arr[i]%gcd2==0){
                flag2=false;
                break;
            }
        }
        if(flag1==false&&flag2==false)cout<<"0"<<"\n";
        else if(flag1==false)cout<<gcd2<<"\n";
        else cout<<gcd1<<"\n";
    }
}