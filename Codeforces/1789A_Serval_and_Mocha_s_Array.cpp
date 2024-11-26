#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        int max=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max)max=arr[i];
        }
        int a=max/2;bool flag1=false;;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(arr[i],arr[j])<=2){
                    flag1=true;
                    break;
                }
            }
            if(flag1)break;
        }
        if(flag1)cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
        } 
}
