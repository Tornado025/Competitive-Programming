#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;
        int d=0;
        map<char,int>arr;
        for(int i=0;i<n;i++){
            if(arr[s[i]]==0){
                d+=(n-i);
                arr[s[i]]++;
            }
        }
        cout<<d<<"\n";
    }
}