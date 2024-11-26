#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int a=0,b=0;
        for(int i=0;i<n-1;i++){
            int c=arr[i]%2;int d=arr[i+1]%2;
            if(c==d)b++;
        }
        cout<<b<<endl;
    }
}