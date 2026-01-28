#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        int a[n];map<int,int>mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[log2(a[i])]++;
        }
        int d=1;int res=k;
        for(int i=0;i<n;i++){
            int l=-1;
            for(int j=20;j>=0;j--){
                if(res>=(1<<j)&&mp[j]>0){
                    l=j;
                    break;
                }
            }
            if(l==-1){
                d++;
                res=k;
                    for(int j=20;j>=0;j--){
                    if(res>=(1<<j)&&mp[j]>0){
                        l=j;
                        break;
                    }
                }
            }
            mp[l]--;
            res-=1<<l;
        }
        cout<<d<<" "<<"\n";
    }
    return 0;
}