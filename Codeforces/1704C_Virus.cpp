#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;int arr[m];
        for(int i=0;i<m;i++)cin>>arr[i];
        sort(arr,arr+m);
        int diff[m];diff[0]=arr[0]-arr[m-1]+n-1;
        for(int i=1;i<m;i++)diff[i]=arr[i]-arr[i-1]-1;
        sort(diff,diff+m,greater<int>());
        int ans=0;
        for(int i=0;i<m;i++){
            diff[i]=diff[i]-(4*i);
            if(diff[i]==1)ans++;
            else if(diff[i]>1)ans+=(diff[i]-1);
            else break;
        }
        cout<<(n-ans)<<"\n";
    }
}