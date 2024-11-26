#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;string s;cin>>n>>s;
        int cnt[26]={0};
        for(int i=0;i<n;i++)cnt[s[i]-97]++;
        int pt[26]={0};
        int maxi=0;
        for(int i=0;i<n;i++){
            --cnt[s[i]-97];
            ++pt[s[i]-97];
            int d=0;
            for(int i=0;i<26;i++)
            d+=min(1,cnt[i])+min(1,pt[i]);
            maxi=max(d,maxi);
        }
        cout<<maxi<<"\n";
    }
}