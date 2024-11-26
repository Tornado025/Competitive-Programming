#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int arr[n];int d=0;int e=0;int f=0;int g=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            d++;
            f=i+1;
        }
        else{
            e++;
            g=i+1;
        }
    }
    if(d==1)cout<<f<<"\n";
    else cout<<g<<"\n";
}