#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        vector<int> arr(n);vector<int> pref(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr.begin(),arr.end());
        pref[0]=arr[0];
        for(int i=1;i<n;i++)pref[i]=arr[i]+pref[i-1];
        int d=0;
        for(int i=n-1;i>=0;i--){
            if(pref[i]<=x){
                d+=(x-pref[i])/(i+1)+1;
            }
        }
        cout<<d<<"\n";
    }
}