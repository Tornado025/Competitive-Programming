#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int l=0;int r=n-1;
        int min=1;int max=n;
        while(l<=r){
            if(arr[l]==min){
                l++;
                min++;
            }
            else if(arr[r]==max){
                r--;
                max--;
            }
            else if(arr[r]==min){
                r--;
                min++;
            }
            else if(arr[l]==max){
                l++;
                max--;
            }
            else 
            break;
        }
        if(l>=r)cout<<"-1"<<"\n";
        else cout<<(l+1)<<" "<<(r+1)<<"\n";
    }
}