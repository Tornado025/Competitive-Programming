#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        int c=0,d=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)c++;
            else if(arr[i]==0)d++;
        }
        cout<<(pow(2,d)*c)<<"\n";
    }
}