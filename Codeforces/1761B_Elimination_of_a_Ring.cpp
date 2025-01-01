#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        map<int,int>ch;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ch[arr[i]]++;
        }
        if(ch.size()==2)cout<<(n/2)+1<<"\n";
        else cout<<n<<"\n";
    }
}