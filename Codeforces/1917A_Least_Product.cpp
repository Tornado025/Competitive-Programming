#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        int d=0;int e=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0)d++;
            else if(arr[i]==0)e=1;
        }
        if(d%2!=0||e==1)cout<<"0"<<"\n";
        else cout<<"1"<<"\n"<<"1 0"<<"\n";
    }
}