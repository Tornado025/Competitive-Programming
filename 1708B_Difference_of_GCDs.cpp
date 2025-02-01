#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,l,r;cin>>n>>l>>r;
        vector<int>arr;bool flag=true;
        for(int i=0;i<n;i++){
            if(l%(i+1)==0)arr.push_back(l);
            else if(l+(i+1-(l%(i+1)))>r){
                flag=false;
                break;
            }
            else arr.push_back(l+(i+1-(l%(i+1))));
        }
        if(flag==false)cout<<"NO"<<"\n";
        else{
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i++)cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }
}