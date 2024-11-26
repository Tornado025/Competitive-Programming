#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int sum1=0;int sum2=0;
        bool flag1=true;
        for(int i=0;i<n;i++){
            sum1+=arr[i];sum2+=arr[n-1-i];
            if(sum1<=0||sum2<=0){
                flag1=false;
                break;
            }
        }
        if(flag1==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}