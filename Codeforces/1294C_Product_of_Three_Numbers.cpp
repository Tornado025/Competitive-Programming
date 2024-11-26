#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
    int n;cin>>n;int copy=n;
    int arr[2];arr[0]=0;arr[1]=0;
    for(int i=2;(i*i)<=n;i++){
        if(n%i==0){
            arr[0]=i;
            n/=i;
            break;
        }
    }
    int c=2;
    if(arr[0]>c)c=arr[0];
    for(int i=c+1;(i*i)<=n;i++){
        if(n%i==0){
            arr[1]=i;
            n/=i;
            break;
        }
    }
    if(arr[0]==0||arr[1]==0||n==1||n==copy||n==arr[0]||n==arr[1])cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n"<<arr[0]<<" "<<arr[1]<<" "<<n<<"\n";
    }
}