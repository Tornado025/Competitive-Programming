#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int occur[k];int step1[k];int step2[k];
        for(int i=0;i<k;i++){
            occur[i]=-1;
            step1[i]=0;
            step2[i]=0;
        }
        for(int i=0;i<n;i++){
            int d=i-occur[arr[i]-1];
            if(d>step1[arr[i]-1]){
                step2[arr[i]-1]=step1[arr[i]-1];
                step1[arr[i]-1]=d;
            }
            else if(d>step2[arr[i]-1])step2[arr[i]-1]=d;
            occur[arr[i]-1]=i;
        }
        for(int i=0;i<k;i++){
            int d=n-occur[i];
            if(d>step1[i]){
                step2[i]=step1[i];
                step1[i]=d;
            }
            else if(d>step2[i])step2[i]=d;
        }
        int mini=1000000007;
        for(int i=0;i<k;i++){
            mini=min(mini,max((step1[i]+1)/2,step2[i]));
        }
        cout<<--mini<<"\n";
    }
}