#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    stack<int>st;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
        if(!st.empty())ans[i]=st.top()+1;
        else ans[i]=0;
        st.push(i);
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    return 0;
}