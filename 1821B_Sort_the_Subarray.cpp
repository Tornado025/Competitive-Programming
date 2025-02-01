#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];int b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int l=-1,r=-1;
        for (int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(l==-1) l=i;
                r=i;
            }
        }
        while(l>0 && b[l-1]<=b[l])l--;
        while(r+1<n && b[r+1]>=b[r])r++;
        cout<<l+1<<" "<<r+1<<"\n";
    }
}