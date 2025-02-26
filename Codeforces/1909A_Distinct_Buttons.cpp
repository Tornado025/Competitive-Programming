#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n][2];
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
                if(j==0){
                    if(arr[i][j]<0)d=1;
                    else if(arr[i][j]>0)u=1;
                }
                else{
                    if(arr[i][j]<0)l=1;
                    else if(arr[i][j]>0)r=1;
                }
            }
        }
        if(d==1&&l==1&&u==1&&r==1)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}