#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t	main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int l;cin>>l;
            set<int>st;
            for(int i=0;i<l;i++){
                int x;cin>>x;
                st.insert(x);
            }
            for(auto it:st){
                mp[it]++;
            }
        }
        bool flag=true;int ct=0;
        for(int i=1;i<=m;i++){
            if(mp[i]>1){
                ct++;
            }
            if(mp[i]==0){
                flag=false;
                break;
            }
        }
        if(flag==false)cout<<"NO"<<"\n";
        else if(n==2&&ct!=m)cout<<"NO"<<"\n";
        else if(ct*2>m)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}