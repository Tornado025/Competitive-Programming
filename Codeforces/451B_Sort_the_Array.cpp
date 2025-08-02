#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l=0,r=0;
    int arr1[n];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            l=i;
            while(arr[i]>arr[i+1]){
                i++;
                if(i==n-1)break;
            }
            r=i;
            break;
        }
    }
    //cout<<l<<" "<<r<<"\n";
    for(int i=0;i<n;i++){
        if(i==l){
            for(int j=r;j>=l;j--){
                arr1[i]=arr[j];
                i++;
            }
            i--;
        }
        else{
            arr1[i]=arr[i];
        }
    }
    bool flag=true;
    //for(int i=0;i<n;i++)cout<<arr1[i]<<" ";
    for(int i=0;i<n-1;i++){
        if(arr1[i]>arr1[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==false)cout<<"no"<<"\n";
    else{
        cout<<"yes"<<"\n";
        cout<<l+1<<" "<<r+1<<"\n";
    }
    return 0;
}