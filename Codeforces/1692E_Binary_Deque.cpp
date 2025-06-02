#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;int arr[n];int pref[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        pref[0]=arr[0];
        for(int i=1;i<n;i++)pref[i]=arr[i]+pref[i-1];
        bool flag=true;int ans=1000000007;
        for(int i=0;i<n;i++){
            int l=i;int r=n-1;int posi=-1;int d=0;
            while(l<=r){
                int mid=(l+r)/2;
                if(i==0)d=pref[mid];
                else d=pref[mid]-pref[i-1];
                if(d<=x){
                    posi=mid;
                    l=mid+1;
                }
                else r=mid-1;
            }
            if(i==0)d=pref[posi];
            else d=pref[posi]-pref[i-1];
            if(posi==-1||d!=x)continue;
            ans=min(ans,n-(posi-i+1));
        }
        if(ans==1000000007)cout<<"-1"<<"\n";
        else cout<<ans<<"\n";
    }
}