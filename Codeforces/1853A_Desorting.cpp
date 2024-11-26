#include <bits/stdc++.h>
using namespace std;
bool check1(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])return false;
    }
    return true;
}
bool check2(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        if(n==2&&arr[1]<arr[0])cout<<"0"<<"\n";
        else if(check2(arr,n)==true)cout<<"1"<<"\n";
        else if(check1(arr,n)==true){
            int mint=abs(arr[1]-arr[0]);
            for(int i=1;i<n-1;i++){
                int d=abs(arr[i]-arr[i+1]);
                if(d<mint)mint=d;
            }
            if(mint==0)mint++;
            cout<<min(mint,(mint/2)+1)<<"\n";
        }
        else cout<<"0"<<"\n";
    }
}
