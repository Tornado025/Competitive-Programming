#include <bits/stdc++.h>
using namespace std;
bool only1(int arr[],int b){
    for(int i=1;i<b;i++)
    if(arr[i]!=arr[0])return false;
    return true;
}
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        if(arr[0]<=arr[1]&&n==2)cout<<"NO"<<endl;
        else if(only1(arr,n))cout<<"NO"<<endl;
        else{
        cout<<"YES"<<endl;
        if(arr[0]==arr[1]){
        cout<<arr[0]<<" "<<arr[n-1]<<" ";
        for(int i=1;i<n-1;i++)cout<<arr[i]<<" ";
        cout<<"\n";
        }
        else {for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"\n";}
    }
}}