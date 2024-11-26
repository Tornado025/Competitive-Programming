#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n,k;cin>>n>>k;int d=n*k;int arr[d];
        for(int i=0;i<d;i++)cin>>arr[i];
        int sum=0;int e=0;int f=n/2;
        for(int i=d-1-f;i>=0;){
            sum+=arr[i];
            i=i-f-1;
            e++;
            if(e==k)break;
        }
        cout<<sum<<"\n";
    }
}