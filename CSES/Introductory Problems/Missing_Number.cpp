#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int arr[n-1];
    for(int i=0;i<n-1;i++)cin>>arr[i];
    sort(arr,arr+n);
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=(i+1)){
            cout<<(i+1)<<"\n";
            flag=true;
            break;
        }
    }
    if(flag==false)cout<<n<<"\n";
}