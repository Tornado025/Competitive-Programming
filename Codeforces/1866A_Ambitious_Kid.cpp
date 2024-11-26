#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mindiff=abs(arr[0]);
    for(int i=0;i<n;i++){
        if(abs(0-arr[i])<mindiff){
            mindiff=abs(0-arr[i]);
        }
    }
    cout<<mindiff<<"\n";
}