#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[2*n];int arr1[n];int arr2[n];
        for(int i=0;i<2*n;i++)cin>>arr[i];
        sort(arr,arr+2*n,greater<int>());
        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[2*i]!=arr[2*i+1]){//there must be two similar numbers
                flag=false;
                break;
            }
            arr1[i]=arr[2*i];//separating all numbers
        }
        for(int i=1;i<n;i++){
            if(arr1[i-1]==arr1[i]||(arr1[i-1]-arr1[i])%(2*(n-i))){
                flag=false;//repeated numbers or those not divisible by 2*(n-i) are not allowed
                break;
            }
            arr2[i]=(arr1[i-1]-arr1[i])/(2*(n-i));
        }
        for(int i=1;i<n;i++){
            arr1[n-1]-=2*i*arr2[i];//checking if the positive integer exists
        }
        if(arr1[n-1]<1||arr1[n-1]%(2*n))flag=false;//checking if the positive integer exists
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}