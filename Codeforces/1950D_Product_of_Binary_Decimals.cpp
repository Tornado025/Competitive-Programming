#include <bits/stdc++.h>
using namespace std;
int dectobin(int n){
    if(n==0)return 0;
    else return (n%2+10*dectobin(n/2));
}
int32_t main(){
    vector<int>arr;
    for(int i=2;i<=64;i++){
        arr.push_back(dectobin(i));
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;bool flag=false;
        for(int i=0;i<63;i++){
            if(n==arr[i])flag=true;
        }
        if(flag==true)cout<<"YES"<<"\n";
        else if(flag==false){
            for(int i=0;i<63;i++){
                while(n%arr[i]==0)n/=arr[i];
            }
            if(n<=1)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}