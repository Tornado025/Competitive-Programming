#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        char arr[n][n];char arr1[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr1[i][j];
            }
        }
        int c=0;vector<char>v(4);
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n/2;j++){
                v.clear();
                v.push_back(arr1[i][j]);
                v.push_back(arr1[j][n-i-1]);
                v.push_back(arr1[n-j-1][i]);
                v.push_back(arr1[n-i-1][n-j-1]);
                sort(v.begin(),v.end());
                for(int i=0;i<4;i++)
                c+=v[3]-v[i];
            }
        }
        cout<<c<<"\n";
    }
}