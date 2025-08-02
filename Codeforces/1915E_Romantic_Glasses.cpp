#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];map<int,int>mp;
        for(int i=0;i<n;i++)cin>>arr[i];
        mp[0]++;int s=0;bool flag=false;
        for(int i=0;i<n;i++){
            if(i%2==0)s-=arr[i];
            else s+=arr[i];
            if(mp[s]>0){
                flag=true;
                break;
            }
            else mp[s]++;
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}