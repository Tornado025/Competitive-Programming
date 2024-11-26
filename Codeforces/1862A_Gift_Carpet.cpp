#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n,m;cin>>n>>m;
    string a="vika";
    string arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[j][i]==a[k]){
            k++;
            break;
            }
        }
        if(k==4)break;
    }
    if(k==4)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    }
}