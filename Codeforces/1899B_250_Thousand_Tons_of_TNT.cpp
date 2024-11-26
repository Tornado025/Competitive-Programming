#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
    int n;cin>>n;int arr[n];int sum=0;
    for(int i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}
    int diff=0;
    for(int d=1;d<n;d++){
        if(n%d==0){
            int maxi=0;int mini=sum;
            for(int i=0;i<n;i+=d){
                int sum1=0;
                for(int j=i;j<(i+d);j++){
                    sum1+=arr[j];
                }
                maxi=max(maxi,sum1);
                mini=min(mini,sum1);
            }
            diff=max(diff,maxi-mini);
        }
    }
    cout<<diff<<"\n";
    }
}