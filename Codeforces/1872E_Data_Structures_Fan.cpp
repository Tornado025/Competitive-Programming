#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        string s;cin>>s;
        int pref[n];pref[0]=arr[0];
        int x1=0,x2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')x1^=arr[i];
            else x2^=arr[i];
        }
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]^arr[i];
        }
        int q;cin>>q;
        for(int i=0;i<q;i++){
            int op;cin>>op;
            if(op==1){
                int l,r;cin>>l>>r;
                int ans=pref[r-1]^pref[l-1]^arr[l-1];
                x1^=ans;
                x2^=ans;
            }
            else{
                int x;cin>>x;
                if(x==1)cout<<x1<<" ";
                else cout<<x2<<" ";
            }
        }
        cout<<"\n";
    }
}