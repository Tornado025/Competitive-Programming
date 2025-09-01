#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool cmp(string a, string b){
    return a+b<b+a;
}
int32_t main(){
    int n;cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n";
    return 0;
}