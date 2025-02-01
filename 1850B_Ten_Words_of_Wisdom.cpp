#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a,b;int maxi=0;int maxi1=0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<=10&&b>maxi){
                maxi=b;
                maxi1=i+1;
            }
        }
        cout<<maxi1<<"\n";
    }
}