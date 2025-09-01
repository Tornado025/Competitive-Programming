#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;
    map<int,int>arr;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        arr[x]=i;
    }
    int d=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>=arr[i+1])d++;
    }
    cout<<d<<"\n";
}