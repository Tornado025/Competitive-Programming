#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        if(arr[n-2]>arr[n-1])cout<<"-1"<<"\n";
        else{
            int arr1[n];bool flag=true;
            for(int i=0;i<n;i++)arr1[i]=arr[i];
            sort(arr1,arr1+n);
            for(int i=0;i<n;i++){
                if(arr1[i]!=arr[i]){
                    flag=false;
                    break;
                }
            }
            if(flag==true)cout<<"0"<<"\n";
            else{
                if(arr[n-1]>=0){
                    cout<<(n-2)<<"\n";
                    for(int i=0;i<n-2;i++)cout<<(i+1)<<" "<<n-1<<" "<<n<<"\n";
                }
                else cout<<"-1"<<"\n";
            }
        }
    }
}