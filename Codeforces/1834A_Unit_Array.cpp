#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)c1++;
            else if(arr[i]==-1)c2++;
        }
        int d=0;
            if(c2>=(n/2)){
            while(c2>=(n/2)||c2%2==0){
            d++;
            c2--;
            }
            cout<<--d<<endl;
            }
            else{
                if(c2%2!=0)cout<<"1"<<endl;
                else cout<<"0"<<endl;
            }
    }
}