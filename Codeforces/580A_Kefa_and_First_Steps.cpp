#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int d=1,maxi=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1])d++;
        else{
            maxi=max(maxi,d);
            d=1;
        }
    }
    maxi=max(maxi,d);
    cout<<maxi<<"\n";
}