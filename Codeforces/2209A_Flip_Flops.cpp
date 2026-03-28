#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]<=a){
                int c=min(b,a-arr[i]);
                b-=c;
                a+=c+arr[i];
            }
            else break;
        }
        cout<<a<<endl;
    }
}