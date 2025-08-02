#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr1[n];int arr2[n];
        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int i=0;i<n;i++)cin>>arr2[i];
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr1[j]>arr1[j+1]){
                    arr.push_back({j+1,j+2});
                    swap(arr1[j],arr1[j+1]);
                    swap(arr2[j],arr2[j+1]);
                }
            }
        }
        bool flag1=true;bool flag2=true;
        for(int i=0;i<n-1;i++){
            if(arr2[i]>arr2[i+1]){
                flag1=false;
                break;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr2[j]>arr2[j+1]){
                    arr.push_back({j+1,j+2});
                    swap(arr1[j],arr1[j+1]);
                    swap(arr2[j],arr2[j+1]);
                }
            }
        }
        for(int i=0;i<n-1;i++){
            if(arr1[i]>arr1[i+1]){
                flag2=false;
                break;
            }
        }
        if(flag1==false&&flag2==false)cout<<"-1"<<"\n";
        else{
            cout<<arr.size()<<"\n";
            for(int i=0;i<arr.size();i++)cout<<arr[i].first<<" "<<arr[i].second<<"\n";
        }
    }
}