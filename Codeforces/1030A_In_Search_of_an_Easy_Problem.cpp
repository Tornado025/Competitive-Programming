#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
        int n;cin>>n;int arr[n];int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)sum=1;
            }
        if(sum==1)cout<<"HARD"<<"\n";
        else cout<<"EASY"<<"\n";
        }