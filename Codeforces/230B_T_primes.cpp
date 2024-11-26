#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool check(int a){
    for(int i=2;i<a;i++)if(a%i==0)return false;
    return true;
}
int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        bool flag=false;
        int c=sqrt(arr[i]);
        if((c*c)==arr[i]&&check(c)==true)flag=true;
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}