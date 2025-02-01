#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int arr1[a];int arr2[b];
        int sum1=0;int sum2=0;
        for(int i=0;i<a;i++){
            cin>>arr1[i];
            sum1+=arr1[i];
        }
        for(int i=0;i<b;i++){
            cin>>arr2[i];
            sum2+=arr2[i];
        }
        if(sum1>sum2)cout<<"Tsondu"<<"\n";
        else if(sum1<sum2)cout<<"Tenzing"<<"\n";
        else cout<<"Draw"<<"\n";
    }
}