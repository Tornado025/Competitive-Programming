#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=n-1;i>=0;i--)cin>>arr[i];
        int x=1;int ans=0;
        while(x<=n){
            while(x<=n&&arr[x-1]==arr[0])x++;
            if(x>n)break;
            x=2*x-1;
            ans++;
        }
        cout<<ans<<"\n";
    }
}