#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(i%2==0&&j%2==0&&arr[i][j]%2!=0)arr[i][j]++;
                if(i%2!=0&&j%2==0&&arr[i][j]%2==0)arr[i][j]++;
                if(i%2==0&&j%2!=0&&arr[i][j]%2==0)arr[i][j]++;
                if(i%2!=0&&j%2!=0&&arr[i][j]%2!=0)arr[i][j]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}