#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int arr[1000002];
    for(int i=0;i<1000002;i++)arr[i]=0;
    for(int i=1;i<=1000001;i++){
        for(int j=i;j<=1000001;j+=i){
            arr[j]++;
        }
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<arr[n]<<"\n";
    }
}