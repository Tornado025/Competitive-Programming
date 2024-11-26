#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;int arr[n];int sum=0,diff=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0)sum+=arr[i];
            else diff+=arr[i];
        }
        cout<<(sum-diff)<<"\n";
    }
}