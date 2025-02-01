#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,c;cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int l=0;int h=1000000007;
        while(l<h){
            int mid=l+(h-l+1)/2;
            int tot=0;
            for(int i=0;i<n;i++){
                tot+=(arr[i]+mid*2)*(arr[i]+mid*2);
                if(tot>c)break;
            }
            if(tot==c){
                cout<<mid<<"\n";
                break;
            }
            else if(tot>c)h=mid-1;
            else l=mid;
        }
    }
}