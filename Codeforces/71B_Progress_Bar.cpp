#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,k,l;cin>>n>>k>>l;
    int arr[n];
    int d=(n*k*l)/100;
    for(int i=0;i<n;i++){
        if(d<k){
            if(d>0){
                arr[i]=d;
                d=0;
            }
            else
            arr[i]=d;
        }
        else{
            arr[i]=k;
            d-=k;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
}