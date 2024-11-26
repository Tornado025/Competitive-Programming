#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int gc=arr[0]-1;
        for(int i=0;i<n;i++)gc=gcd(gc,arr[i]-i-1);
        cout<<gc<<"\n";
    }
}