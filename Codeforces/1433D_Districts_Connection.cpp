#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(mp.size()==1)cout<<"NO"<<"\n";
        else{
            cout<<"YES"<<"\n";
            int d=0;
            for(int i=0;i<n;i++){
                if(arr[i]!=arr[0]){
                    cout<<"1 "<<(i+1)<<"\n";
                    d=i+1;
                }
            }
            for(int i=1;i<n;i++){
                if(arr[i]==arr[0]){
                    cout<<d<<" "<<(i+1)<<"\n";
                }
            }
        }
    }
}