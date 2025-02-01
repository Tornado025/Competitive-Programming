#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        queue<int>arr;
        int n;cin>>n;
        while(n--){
            int x;cin>>x;
            arr.push(x);
            while(arr.front()<arr.size())arr.pop();
            cout<<arr.size()<<" ";
        }
        cout<<"\n";
    }
}