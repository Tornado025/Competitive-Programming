#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n,q;cin>>n>>q;
        int arr[n];pair<int,int>qa[q];int rep[q];
        for(int i=0;i<n;i++)cin>>arr[i];
        int pref[n];pref[0]=arr[0];
        for(int i=1;i<n;i++)pref[i]=pref[i-1]+arr[i];

        for(int i=0;i<q;i++)cin>>qa[i].first>>qa[i].second>>rep[i];
        for(int i=0;i<q;i++){
            int sum=0;
            if(qa[i].first==1)sum=pref[n-1]-pref[qa[i].second-1];
            else
            sum=pref[n-1]-pref[qa[i].second-1]+pref[qa[i].first-2];
            int sum1=rep[i]*(qa[i].second-qa[i].first+1);
            //cout<<sum<<" "<<sum1<<"\n";
            if((sum+sum1)%2==0)cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
        }
    }
}