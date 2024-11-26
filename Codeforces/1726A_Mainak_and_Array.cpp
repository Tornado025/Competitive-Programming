#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int maxi=arr[n-1]-arr[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,(arr[n-1]-arr[i]));
            maxi=max(maxi,(arr[i]-arr[0]));
            maxi=max(maxi,arr[(i-1+n)%n]-arr[i]);
        }
        cout<<maxi<<"\n";
    }
}