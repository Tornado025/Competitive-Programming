#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int maxi1=0,maxi2=0;
        for(int i=0;i<=31;i++){
            if(a&(1<<i))maxi1=max(maxi1,i);
            if(b&(1<<i))maxi2=max(maxi2,i);
        }
        if(maxi2>maxi1)cout<<"-1"<<"\n";
        else{
            vector<int>arr;
            for(int i=0;i<=maxi1;i++){
                if((a&(1<<i))==(b&(1<<i)))continue;
                else arr.push_back((1<<i));
            }
            cout<<arr.size()<<"\n";
            for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}