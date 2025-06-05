#include <bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main(){
    int n;cin>>n;set<int>st;
    while(n--){
        int x;cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<"\n";
}