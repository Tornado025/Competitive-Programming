#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n/2;i++){
            int k=n-i-1;
            for(int j=i;j<=k;j++){
                int l=n-1-j;
                int cnt=0;
                if(arr[i][j]=='1')cnt++;
                if(arr[j][k]=='1')cnt++;
                if(arr[k][l]=='1')cnt++;
                if(arr[l][i]=='1')cnt++;
                if(cnt<=2)arr[i][j]=arr[j][k]=arr[k][l]=arr[l][i]='0';
                else arr[i][j]=arr[j][k]=arr[k][l]=arr[l][i]='1';
                ans+=min(cnt,4-cnt);
            }
        }
        cout<<ans<<"\n";
    }
}