#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        int arr[n];map<int,int>track;
        for(int i=0;i<n;i++){cin>>arr[i];track[arr[i]]++;}
        int maxi=0;
        for(auto&[x,y]:track)maxi=max(maxi,y);
        int ans=0;
        while(maxi<n){
            int d=min(n-maxi,maxi);
            ans+=d;ans++;
            maxi+=d;
        }
        cout<<ans<<"\n";
    }
}