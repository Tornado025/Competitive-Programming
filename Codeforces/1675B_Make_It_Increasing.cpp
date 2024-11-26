#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag=true;int d=0;
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1]&&arr[i]>0){
                arr[i]/=2;
                d++;
            }
            if(arr[i]==arr[i+1]){
                flag=false;
                break;
            }
        }
        if(flag)cout<<d<<"\n";
        else cout<<"-1"<<"\n";
    }
}