#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int d=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]!=arr[n-1-i][n-1-j])
                d++;
            }
        }
        d/=2;
        if(d>k)cout<<"NO"<<"\n";
        else if(n%2!=0)cout<<"YES"<<"\n";
        else if((k-d)%2!=0)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}