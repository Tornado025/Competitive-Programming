#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n,k;cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr.begin(),arr.end());
        int d=1;int maxi=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]<=k){
                d++;
                if(i==arr.size()-2)maxi=max(d,maxi);
            }
            else{
                maxi=max(d,maxi);
                d=1;
            }
        }
        if(n==1)cout<<"0"<<"\n";
        else
        cout<<(n-maxi)<<endl;
    }
}