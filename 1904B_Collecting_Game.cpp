#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int>>arr(n);int pref[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            arr[i].second=i;
        }
        sort(arr.begin(),arr.end());
        pref[0]=arr[0].first;
        for(int i=1;i<n;i++)pref[i]=pref[i-1]+arr[i].first;
        stack<int>st;int arr2[n];
        for(int i=0;i<n;i++)arr2[i]=0;
        for(int i=0;i<n;i++){
            st.push(arr[i].second);
            if(i==n-1||arr[i+1].first>pref[i]){
                while(st.size()!=0){
                    arr2[st.top()]=i;
                    st.pop();
                }
            }
        }
        for(int i=0;i<n;i++)cout<<arr2[i]<<" ";
        cout<<"\n";
    }
}