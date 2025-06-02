#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        int ans=1000000007;
        for(char ch='a';ch<='z';ch++){
            int l=0,r=n-1,d=0;
            while(l<=r){
                if(s[l]==s[r]){
                    l++;r--;
                }
                else if(s[l]==ch){
                    d++;l++;
                }
                else if(s[r]==ch){
                    d++;r--;
                }
                else{
                    d=100001;break;
                }
            }
            ans=min(ans,d);
        }
        if(ans==100001)cout<<"-1"<<"\n";
        else cout<<ans<<"\n";
    }
}