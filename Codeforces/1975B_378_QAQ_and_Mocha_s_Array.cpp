#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>b;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        if(arr[i]%arr[0]!=0)b.push_back(arr[i]);
        if(b.size()<=1)cout<<"YES"<<"\n";
        else{
            bool flag=true;
            for(int i=1;i<b.size();i++){
                if(b[i]%b[0]!=0){
                    flag=false;
                    break;
                }
            }
            if(flag)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}