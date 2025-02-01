#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];map<int,int>chk;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            chk[arr[i]]=i+1;
        }
        int maxi=-1;
        for(auto x:chk){
            for(auto y:chk){
                if(gcd(x.first,y.first)==1)
                maxi=max(maxi,x.second+y.second);
            }
        }
        cout<<maxi<<"\n";
    }
}