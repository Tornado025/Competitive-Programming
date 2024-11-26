#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int d=0,max=0;
        for(int i=0;i<n;i++){
            while(arr[i]==0){
                i++;d++;
                if(i==n)break;
            }
            if(d>max)max=d;
            d=0;
        }
        cout<<max<<"\n";
    }
}