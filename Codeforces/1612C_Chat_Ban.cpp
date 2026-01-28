#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;cin>>n>>k;
        if(k<n*(n+1)/2){
            int l=1,r=n;
            int ans=0;
            while(l<=r){
                int mid=(r+l)/2;
                int sum=mid*(mid+1)/2;
                if(sum==k){
                    ans=mid;
                    break;
                }
                else if(sum>k){
                    r=mid-1;
                    ans=mid;
                }
                else l=mid+1;
            }
            cout<<ans<<"\n";
        }
        else if(k==n*(n+1)/2){
            cout<<n<<"\n";
        }
        else if(k>=n*n){
            cout<<2*n-1<<"\n";
        }
        else{
            k-=(n*(n+1)/2);
            int l=1,r=n-1;
            int ans=1;
            //cout<<k<<"\n";
            while(l<=r){
                int mid=(r+l)/2;
                int sum=mid*n-mid*(mid+1)/2;
                //cout<<sum<<"\n";
                if(sum==k){
                    ans=mid;
                    break;
                }
                else if(sum>k){
                    r=mid-1;
                    ans=mid;
                }
                else{
                    l=mid+1;
                } 
            }
            cout<<ans+n<<"\n";
        }
    }
    return 0;
}