#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        int arr[n];
        int oddct=0,evenct=0;int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                evenct++;
            }
            else{
                oddct++;
            }
            sum+=arr[i];
        }
        int a=0;int b=0;
        for(int i=0;i<q;i++){
            cin>>a>>b;
            if(a==0){
                sum+=b*evenct;
                if(b%2!=0){
                    oddct+=evenct;
                    evenct=0;
                }
                cout<<sum<<"\n";
            }
            else if(a==1){
                sum+=b*oddct;
                if(b%2!=0){
                    evenct+=oddct;
                    oddct=0;
                }
                cout<<sum<<"\n";
            }
        }
    }
}