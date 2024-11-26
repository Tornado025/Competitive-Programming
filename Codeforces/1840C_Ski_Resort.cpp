#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k,q;cin>>n>>k>>q;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int d=0;int s=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=q)d++;
            else{
                if(d>=k){
                    s+=((d-k+1)*(d-k+2))/2;
                }
                d=0;
            }
        }
        if(d>=k)
        s+=((d-k+1)*(d-k+2))/2;
        cout<<s<<"\n";
    }
}