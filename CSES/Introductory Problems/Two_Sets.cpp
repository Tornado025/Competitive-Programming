#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    int d=n*(n+1)/2;
    if(d%2!=0)cout<<"NO"<<"\n";
    else{
        int e=d/2;
        vector<int>arr1;vector<int>arr2;
        for(int i=n;i>=1;i--){
            if((e-i)<0){
                arr2.push_back(i);
            }
            else{
                arr1.push_back(i);
                e-=i;
            }
        }
        cout<<"YES"<<"\n";
        cout<<arr1.size()<<"\n";
        for(int i=0;i<arr1.size();i++)cout<<arr1[i]<<" ";
        cout<<"\n";
        cout<<arr2.size()<<"\n";
        for(int i=0;i<arr2.size();i++)cout<<arr2[i]<<" ";
        cout<<"\n";
    }
}