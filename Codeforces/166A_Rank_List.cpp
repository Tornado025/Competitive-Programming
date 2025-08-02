#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first>b.first)return true;
    else if(a.first<b.first)return false;
    else return a.second<b.second;
}
int32_t main() {
    int n,x;cin>>n>>x;vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end(),cmp);
    //for(int i=0;i<n;i++)cout<<arr[i].first<<" "<<arr[i].second<<"\n";  
    int arr1[n];arr1[0]=1;
    for(int i=1;i<n;i++){
        if(arr[i].second==arr[i-1].second&&arr[i].first==arr[i-1].first)arr1[i]=arr1[i-1];
        else arr1[i]=arr1[i-1]+1;
    }
    int d=arr1[x-1];int ans=0;
    for(int i=0;i<n;i++)if(arr1[i]==d)ans++;
    cout<<ans<<"\n";
    return 0;
}