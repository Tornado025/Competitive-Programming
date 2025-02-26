#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=1;i<=60;i++){
            map<int,int>ch;
            int d=pow(2,i);
            for(int j=0;j<n;j++){
                ch[arr[j]%d]++;
            }
            if(ch.size()>=2){
                cout<<d<<"\n";
                break;
            }
        }
    }
}