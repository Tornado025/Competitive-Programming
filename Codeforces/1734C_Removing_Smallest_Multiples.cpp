#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;string s;cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            if(s[i]=='0')arr[i]=0;
            else arr[i]=1;
        }
        int arr1[n];
        for(int i=0;i<n;i++)arr1[i]=0;
        for(int i=n;i>=1;i--){
            for(int j=i;j<=n;j+=i){
                if(arr[j-1]==1)break;
                arr1[j-1]=i;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)ans+=arr1[i];
        cout<<ans<<"\n";
    }
}