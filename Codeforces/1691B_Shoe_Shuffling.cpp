#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]&&(i==(n-2)||i==0)){
            flag=false;
            break;
        }
        else if(i>0&&i<(n-2)){
            if(arr[i]!=arr[i+1]&&arr[i]!=arr[i-1]){
                flag=false;
                break;
            }
        }
    }
    if(flag==false||n==1)
    cout<<"-1"<<"\n";
    else{
        for(int i=1;i<n;i++){
        vector<int>d;
        d.push_back(i);
        while(arr[i]==arr[i-1]){
            i++;
            d.push_back(i);
        }
        for(int i=1;i<d.size();i++){
            cout<<d[i]<<" ";
        }
        cout<<d[0]<<" ";
    }
    cout<<"\n";
    }
    }
}