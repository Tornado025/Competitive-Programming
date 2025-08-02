#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
        int n,k,x;cin>>n>>k>>x;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>diff;int ans=n;
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>x)diff.push_back(arr[i+1]-arr[i]);
        }
        ans=diff.size();
        sort(diff.begin(),diff.end());
        for(int i=0;i<diff.size();i++){
            if(k<0)break;
            else{
                int d=(diff[i]-1)/x;
                k-=d;
                if(k<0)break;
                ans--;
            }
        }
        cout<<ans+1<<"\n";
}