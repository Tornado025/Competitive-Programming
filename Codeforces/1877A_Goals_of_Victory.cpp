#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;int arr[n];int sum;
        for(int i=0;i<n-1;i++){cin>>arr[i];sum+=arr[i];}
        cout<<(0-sum)<<"\n";
        sum=0;
    }
}