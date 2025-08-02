#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int ans[n];
        for(int i=0;i<n;i++)ans[i]=-1;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1];//default setting index
            if(arr[i]!=arr[i-1])ans[i]=i-1;//resetting nearest left element
        }
        int q;cin>>q;
        for(int i=0;i<q;i++){
            int l,r;cin>>l>>r;
            if(ans[r-1]<l-1)cout<<"-1 -1"<<"\n";
            else cout<<ans[r-1]+1<<" "<<r<<"\n";
        }
    }
}