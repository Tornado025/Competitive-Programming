#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;int arr[n];int max,min;
        for(int i=0;i<n;i++){
            cin>>arr[i];
                    }
        max=arr[0];min=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max)max=arr[i];
            else if(arr[i]<min)min=arr[i];
        }
        int d=max+min;
        for(int i=0;i<n;i++){
            cout<<(d-arr[i])<<" ";
        }
        cout<<"\n";
    }
}