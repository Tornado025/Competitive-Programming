#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n;cin>>n;int arr[n];
    int bitct[21];
    for(int i=0;i<21;i++)bitct[i]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(int j=0;j<21;j++)
            if(arr[i]&(1<<j))bitct[j]++;
    }
    int sum=0;int ct=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<21;j++){
            if(bitct[j]>0){
                bitct[j]--;ct+=1<<j;
            }
        }
        sum+=ct*ct;
        ct=0;
    }
    cout<<sum<<"\n";
}