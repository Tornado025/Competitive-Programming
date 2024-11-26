#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int a,b;cin>>a>>b;int arr[a];
        for(int i=0;i<a;i++)cin>>arr[i];
        int d=2*(b-arr[a-1]);
        d=max(d,arr[0]);
        for(int i=0;i<a-1;i++){
            int j=i+1;
            d=max(d,arr[j]-arr[i]);
        }
        cout<<d<<"\n";
    }
}