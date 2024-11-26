#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        if(n%2==0){
            cout<<"2"<<"\n";
            cout<<"1 "<<n<<"\n";
            cout<<"1 "<<n<<"\n";
        }
        else{
            cout<<"4"<<"\n";
            cout<<"1 "<<n-1<<"\n";
            cout<<"1 "<<n-1<<"\n";
            cout<<n-1<<" "<<n<<"\n";
            cout<<n-1<<" "<<n<<"\n";
        }
    }
}