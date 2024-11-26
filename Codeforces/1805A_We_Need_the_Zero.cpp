#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;int arr[n];int xo=0;
        for(int j=0;j<n;j++){cin>>arr[j];xo^=arr[j];}
        if(xo==0)cout<<"0"<<endl;
        else{
            if(n%2==1)cout<<xo<<endl;
            else cout<<"-1"<<endl;
        }
    }
}
