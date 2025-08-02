#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int arr[n];arr[0]=1;arr[1]=2;
        for(int i=2;i<n;i++)
        arr[i]=arr[i-1]+arr[i-2];
        int d=arr[n-1]+arr[n-2];
        string s="";
        for(int i=0;i<m;i++){
            int a,b,c;cin>>a>>b>>c;
            if((a>=arr[n-1]&&b>=arr[n-1]&&c>=d)||(b>=arr[n-1]&&c>=arr[n-1]&&a>=d)||(a>=arr[n-1]&&c>=arr[n-1]&&b>=d))s+='1';
            else s+='0';
        }
        cout<<s<<"\n";
    }
}