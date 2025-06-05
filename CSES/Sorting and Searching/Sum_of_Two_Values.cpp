#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,s;cin>>n>>s;
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back({x,i});
    }
    sort(arr.begin(),arr.end());
    int i=0;int j=n-1;bool flag=false;
    while(i<j){
        if(arr[i].first+arr[j].first>s)j--;
        else if(arr[i].first+arr[j].first<s)i++;
        else{
            cout<<(arr[i].second+1)<<" "<<(arr[j].second+1)<<"\n";
            flag=true;
            break;
        }
    }
    if(flag==false)cout<<"IMPOSSIBLE"<<"\n";
}